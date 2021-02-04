//
// Created by Samad Mazarei on 2/4/21.
// Copyright (c) 2021 California State University Channel Islands. All rights reserved.
//


#include "MySteppingAction.hh"
#include "MyEventAction.hh"
#include "MyDetectorConstruction.hh"

#include "G4Step.hh"
#include "G4Event.hh"
#include "G4RunManager.hh"
#include "G4LogicalVolume.hh"

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

MySteppingAction::MySteppingAction(MyEventAction* eventAction)
        : G4UserSteppingAction(){}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

MySteppingAction::~MySteppingAction(){}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void MySteppingAction::UserSteppingAction(const G4Step* step){
  G4cout
          << G4endl
          << "--------------------User Stepping Action-----------------------";
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......


