//
// Created by Samad Mazarei on 10/30/20.
// Copyright (c) 2020 California State University Channel Islands. All rights reserved.
//

#ifndef MYTEST1_MYPRIMARYGENERATORACTION_HH
#define MYTEST1_MYPRIMARYGENERATORACTION_HH

#include "G4VUserPrimaryGeneratorAction.hh"
#include "globals.hh"

class G4ParticleGun;
class G4Event;

/// The primary generator action class with particle gum.
///
/// It defines a single particle which hits the Tracker
/// perpendicular to the input face. The type of the particle
/// can be changed via the G4 build-in commands of G4ParticleGun class
/// (see the macros provided with this example).

class MyPrimaryGeneratorAction : public G4VUserPrimaryGeneratorAction
{
public:
    MyPrimaryGeneratorAction();
    virtual ~MyPrimaryGeneratorAction();

    virtual void GeneratePrimaries(G4Event* );

    G4ParticleGun* GetParticleGun() {return fParticleGun;}

    // Set methods
    void SetRandomFlag(G4bool );

private:
    G4ParticleGun*          fParticleGun; // G4 particle gun
};

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
#endif //MYTEST1_MYPRIMARYGENERATORACTION_HH
