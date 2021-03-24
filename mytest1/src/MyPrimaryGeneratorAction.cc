//
// Created by Samad Mazarei on 11/3/20.
// Copyright (c) 2020 California State University Channel Islands. All rights reserved.
//

// I left this code in skeleton branch because it is helpful.
// This creates the particle gun that will shoot our particle.
#include "MyPrimaryGeneratorAction.hh"

#include "G4LogicalVolumeStore.hh"
#include "G4LogicalVolume.hh"
#include "G4Box.hh"
#include "G4Event.hh"
#include "G4ParticleGun.hh"
#include "G4ParticleTable.hh"
#include "G4ParticleDefinition.hh"
#include "G4SystemOfUnits.hh"

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

MyPrimaryGeneratorAction::MyPrimaryGeneratorAction()
        : G4VUserPrimaryGeneratorAction()
{
    // Number of particles
    G4int nofParticles = 1;
    fParticleGun = new G4ParticleGun(nofParticles);

    // Return a particle Table
    G4ParticleTable* particleTable = G4ParticleTable::GetParticleTable();
    // Retrieve proton from table
    G4ParticleDefinition* particle
            = particleTable->FindParticle("proton");
    // Register with gun
    fParticleGun->SetParticleDefinition(particle);
    // The G4ThreeVector takes a unit vector,
    // it sets the direction that the particle gun will shoot.
    // In this case (1 0 0) means that it will fire from its position into the positive x direction
    fParticleGun->SetParticleMomentumDirection(G4ThreeVector(1.,0.,0.));
    // Set energy to 1 MeV
    fParticleGun->SetParticleEnergy(1.0*MeV);
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

MyPrimaryGeneratorAction::~MyPrimaryGeneratorAction()
{
    delete fParticleGun;
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void MyPrimaryGeneratorAction::GeneratePrimaries(G4Event* anEvent)
{
    // We get world volume
    // from G4LogicalVolumeStore so that we can get
    // values for setting position of particle gun below.
    G4double worldXHalfLength = {0};
    G4LogicalVolume* worldLV
            = G4LogicalVolumeStore::GetInstance()->GetVolume("World");
    G4Box* worldBox = nullptr;
    if ( worldLV ) {
      worldBox = dynamic_cast<G4Box*>(worldLV->GetSolid());
    }
    if ( worldBox ){
      worldXHalfLength = worldBox->GetXHalfLength();
    }
    else{
        G4cerr << "World volume of box not found." << G4endl;
        G4cerr << "Perhaps you have changed geometry." << G4endl;
    }
    // We set the direction that the particle gun will fire above,
    // now we will set the location from which it will fire. This particular case
    // will from the beginning of the world in the negative x direction and the origin
    // of the yz plane.
    fParticleGun->SetParticlePosition(G4ThreeVector(- worldXHalfLength , 0., 0));
    fParticleGun->GeneratePrimaryVertex(anEvent);
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......