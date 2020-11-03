//
// Created by Samad Mazarei on 10/19/20.
// Copyright (c) 2020 California State University Channel Islands. All rights reserved.
//
//

#include "MyActionInitialization.hh"
#include "MyPrimaryGeneratorAction.hh"
#include "MyRunAction.hh"
#include "MyEventAction.hh"

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

MyActionInitialization::MyActionInitialization()
        : G4VUserActionInitialization() {}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

MyActionInitialization::~MyActionInitialization() {}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void MyActionInitialization::BuildForMaster() const {
    SetUserAction(new MyRunAction);
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void MyActionInitialization::Build() const {
    SetUserAction(new MyPrimaryGeneratorAction);
    SetUserAction(new MyRunAction);
    SetUserAction(new MyEventAction);
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

