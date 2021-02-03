//
// Created by Samad Mazarei on 11/3/20.
// Copyright (c) 2020 California State University Channel Islands. All rights reserved.
//


#include "MyRunAction.hh"

#include "G4Run.hh"
#include "G4RunManager.hh"
// TODO: Read dox and impliment
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

MyRunAction::MyRunAction(): G4UserRunAction() {
  // set printing event number per each 100 events
  G4RunManager::GetRunManager()->SetPrintProgress(1000);
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

MyRunAction::~MyRunAction() {}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void MyRunAction::BeginOfRunAction(const G4Run *) {
  //inform the runManager to save random number seed
  G4RunManager::GetRunManager()->SetRandomNumberStore(false);
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void MyRunAction::EndOfRunAction(const G4Run *) {}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......