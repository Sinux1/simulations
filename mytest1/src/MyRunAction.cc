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
  // Still figuring these out
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

MyRunAction::~MyRunAction() {}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void MyRunAction::BeginOfRunAction(const G4Run *) {
  //inform the runManager to save random number seed
  G4RunManager::GetRunManager()->SetRandomNumberStore(false);
  // Place holder for later
  G4cout
          << G4endl
          << "-----------------Beginning of RunAction--------------------"
          << G4endl;
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void MyRunAction::EndOfRunAction(const G4Run *) {
  // Place holder for later
  G4cout
          << G4endl
          << "--------------------End of RunAction-----------------------"
          << G4endl;

}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......