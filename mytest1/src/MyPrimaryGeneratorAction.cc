//
// Created by Samad Mazarei on 11/3/20.
// Copyright (c) 2020 California State University Channel Islands. All rights reserved.
//


#include "MyPrimaryGeneratorAction.hh"

#include "G4LogicalVolumeStore.hh"
#include "G4LogicalVolume.hh"
#include "G4Box.hh"
#include "G4Event.hh"
#include "G4ParticleGun.hh"
#include "G4ParticleTable.hh"
#include "G4ParticleDefinition.hh"
#include "G4SystemOfUnits.hh"

#include "Randomize.hh"

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

MyPrimaryGeneratorAction::MyPrimaryGeneratorAction()
        : G4VUserPrimaryGeneratorAction()
{
    G4int nofParticles = 1;
    fParticleGun = new G4ParticleGun(nofParticles);

    // default particle kinematic

    G4ParticleDefinition* particleDefinition
            = G4ParticleTable::GetParticleTable()->FindParticle("proton");

    fParticleGun->SetParticleDefinition(particleDefinition);
    fParticleGun->SetParticleMomentumDirection(G4ThreeVector(0.,0.,1.));
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
    // This function is called at the begining of event

    // In order to avoid dependence of PrimaryGeneratorAction
    // on DetectorConstruction class we get world volume
    // from G4LogicalVolumeStore.

    G4double worldZHalfLength = 0;
    G4LogicalVolume* worldLV
            = G4LogicalVolumeStore::GetInstance()->GetVolume("World");
    G4Box* worldBox = NULL;
    if ( worldLV ) worldBox = dynamic_cast<G4Box*>(worldLV->GetSolid());
    if ( worldBox ) worldZHalfLength = worldBox->GetZHalfLength();
    else  {
        G4cerr << "World volume of box not found." << G4endl;
        G4cerr << "Perhaps you have changed geometry." << G4endl;
        G4cerr << "The gun will be place in the center." << G4endl;
    }

    // Note that this particular case of starting a primary particle on the world boundary
    // requires shooting in a direction towards inside the world.
    fParticleGun->SetParticlePosition(G4ThreeVector(0., 0., -worldZHalfLength));

    fParticleGun->GeneratePrimaryVertex(anEvent);
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......