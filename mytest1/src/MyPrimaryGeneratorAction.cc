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
    // I need to read back through the docs for this one, although its just a unit direction (I think)
    fParticleGun->SetParticleMomentumDirection(G4ThreeVector(0.,0.,1.));
    // Set energy
    fParticleGun->SetParticleEnergy(3.0*GeV);
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
    // from G4LogicalVolumeStore.
    G4double worldZHalfLength = {0};
    G4LogicalVolume* worldLV
            = G4LogicalVolumeStore::GetInstance()->GetVolume("World");
    G4Box* worldBox = nullptr;
    if ( worldLV ) {
      worldBox = dynamic_cast<G4Box*>(worldLV->GetSolid());
    }
    if ( worldBox ){
      worldZHalfLength = worldBox->GetZHalfLength();
    }
    else{
        G4cerr << "World volume of box not found." << G4endl;
        G4cerr << "Perhaps you have changed geometry." << G4endl;
    }
    // Note that this particular case of starting a primary particle on the world boundary
    // requires shooting in a direction towards inside the world.
    fParticleGun->SetParticlePosition(G4ThreeVector(0., 0., -worldZHalfLength));
    fParticleGun->GeneratePrimaryVertex(anEvent);
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......