//
// Created by Samad Mazarei on 11/28/20.
// Copyright (c) 2020 California State University Channel Islands. All rights reserved.
//
#include <G4BaryonConstructor.hh>
#include "G4ios.hh"
#include "MyPhysicsList.hh"
#include "G4ParticleDefinition.hh"
#include "G4MaterialTable.hh"
#include "G4ProcessManager.hh"
#include "G4ProcessVector.hh"
#include "G4DecayPhysics.hh"
#include "G4HadronInelasticQBBC.hh"
#include "G4IonPhysics.hh"
#include "G4EmExtraPhysics.hh"
#include "G4SystemOfUnits.hh"

MyPhysicsList::MyPhysicsList() : G4VUserPhysicsList(){}

MyPhysicsList::~MyPhysicsList() {}

// Required
void MyPhysicsList::ConstructParticle() {
  // Defining all particles is verbose and complicated for more complicated
  // simulations and we can use the G4VModularPhysicsList for that. But for this
  // simulation I will be defining the particles individually.
  // A proton is a baryon, so we will use a provided helper
  G4BaryonConstructor baryonConstructor;
  baryonConstructor.ConstructParticle();
}
// Required
void MyPhysicsList::ConstructProcess() {
  // Provided by G4VUserPhysicsList, assigns transportation process
  // to all particles defined in Construct Particle
  AddTransportation();
  // Helper method for other processes
  ConstructGeneral();

}
// Optional : I believe that the default cut is 1mm
void MyPhysicsList::SetCuts() {
  // Implemented to show how to change default cut size simply
  // Define a new value
  G4double myNewCutValue = 0.2*CLHEP::mm;
  // use G4VUserPhysicsList class method to set new default
  SetDefaultCutValue(myNewCutValue);
}

void MyPhysicsList::ConstructGeneral() {
  G4PhysicsListHelper* helper = G4PhysicsListHelper::GetPhysicsListHelper();
  // This will return a list of particles that can be iterated over I believe
  auto particleIterator = GetParticleIterator();
  particleIterator->reset();
  // Creating a process to apply to particles during simulation
  G4Decay* decayProc = new G4Decay();


  // Iterate over list of particles and apply any processes that apply
  // I added this because it is easy to implement and gives me a better idea
  // Of how the overall structure of the code works together to achieve a simulation
  while( (*particleIterator)() ){ // I believe particleIterator->value() returns the next value... ?
    G4ParticleDefinition* particleDef = particleIterator->value();

    if( decayProc->IsApplicable(*particleDef)) {

      // If applicable, add the process to the particle
      helper->RegisterProcess(decayProc, particleDef);

    }// add elseif for other processes created above as needed... pg 212 in dev guide shows using name of particle instead
  }


}