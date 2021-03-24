//
// Created by Samad Mazarei on 11/3/20.
// Copyright (c) 2020 California State University Channel Islands. All rights reserved.
//

#include "MyEventAction.hh"
#include "MyRunAction.hh"

#include "G4Event.hh"
#include "G4EventManager.hh"
#include "G4TrajectoryContainer.hh"
#include "G4Trajectory.hh"
#include "G4ios.hh"

// TODO: Read dox and impliment
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

MyEventAction::MyEventAction(MyRunAction* runaction) : G4UserEventAction() {}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

MyEventAction::~MyEventAction() {}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void MyEventAction::BeginOfEventAction(const G4Event *) {
  // Place holder for later
  G4cout
          << G4endl
          << "--------------------Beginning of EventAction-----------------------"
          << G4endl;

}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void MyEventAction::EndOfEventAction(const G4Event *) {
  // Place holder for later
  G4cout
          << G4endl
          << "--------------------End of Event Action-----------------------"
          << G4endl;

}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
