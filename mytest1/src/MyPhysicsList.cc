//
// Created by Samad Mazarei on 11/28/20.
// Copyright (c) 2020 California State University Channel Islands. All rights reserved.
//
#include <G4BaryonConstructor.hh>
#include "G4ios.hh"
//#include "iomanip.h"
#include "globals.hh"

#include "MyPhysicsList.hh"

#include "G4ParticleDefinition.hh"
#include "G4ParticleTypes.hh"
#include "G4ParticleWithCuts.hh"
#include "G4ParticleTable.hh"
#include "G4Material.hh"
#include "G4MaterialTable.hh"
#include "G4ProcessManager.hh"
#include "G4ProcessVector.hh"

#include "G4EmStandardPhysics.hh"
#include "G4EmLivermorePhysics.hh"
#include "G4EmPenelopePhysics.hh"
#include "G4EmLowEPPhysics.hh"
#include "G4DecayPhysics.hh"
#include "G4HadronElasticPhysics.hh"
#include "G4HadronInelasticQBBC.hh"
#include "G4IonPhysics.hh"
#include "G4EmExtraPhysics.hh"
#include "G4StoppingPhysics.hh"
#include "G4OpticalPhysics.hh"

#include "G4UnitsTable.hh"
#include "G4SystemOfUnits.hh"
#include "G4LossTableManager.hh"

MyPhysicsList::MyPhysicsList() : G4VUserPhysicsList(){}

MyPhysicsList::~MyPhysicsList() {}


void MyPhysicsList::ConstructParticle() {
  // Defining all particles is verbose and complicated for more complicated
  // simulations and we can use the G4VModularPhysicsList for that. But for this
  // simulation I will be defining the particles individually.
  // A proton is a baryon, so we will use a provided helper
  G4BaryonConstructor baryonConstructor;
  baryonConstructor.ConstructParticle();
}

void MyPhysicsList::ConstructProcess() {
  // Provided by G4VUserPhysicsList
  AddTransportation();

}

void MyPhysicsList::SetCuts() {}

