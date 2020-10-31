//
// Created by Samad Mazarei on 10/19/20.
// Copyright (c) 2020 California State University Channel Islands. All rights reserved.
//
//

#include "MyActionInitialization.hh"
#include "B2PrimaryGeneratorAction.hh"
#include "B2RunAction.hh"
#include "B2EventAction.hh"

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

B2ActionInitialization::B2ActionInitialization()
        : G4VUserActionInitialization()
{}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

B2ActionInitialization::~B2ActionInitialization()
{}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void B2ActionInitialization::BuildForMaster() const
{
    SetUserAction(new B2RunAction);
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void B2ActionInitialization::Build() const
{
    SetUserAction(new B2PrimaryGeneratorAction);
    SetUserAction(new B2RunAction);
    SetUserAction(new B2EventAction);
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

