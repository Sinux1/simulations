//
// Created by Samad Mazarei on 10/19/20.
// Copyright (c) 2020 California State University Channel Islands. All rights reserved.
//
//

#include "MyActionInitialization.hh"
#include "MyPrimaryGeneratorAction.hh"
#include "MyRunAction.hh"
#include "MyEventAction.hh"
#include "MySteppingAction.hh"

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

MyActionInitialization::MyActionInitialization() : G4VUserActionInitialization() {}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

MyActionInitialization::~MyActionInitialization() {}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void MyActionInitialization::BuildForMaster() const {
  SetUserAction(new MyRunAction);
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void MyActionInitialization::Build() const {

  SetUserAction(new MyPrimaryGeneratorAction);

  MyRunAction* runaction = new MyRunAction;
  SetUserAction(runaction);

  MyEventAction* eventaction = new MyEventAction(runaction);
  SetUserAction(eventaction);

  SetUserAction(new MySteppingAction(eventaction));
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
