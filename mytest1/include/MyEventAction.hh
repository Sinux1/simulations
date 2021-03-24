//
// Created by Samad Mazarei on 10/30/20.
// Copyright (c) 2020 California State University Channel Islands. All rights reserved.
//

#ifndef MYTEST1_MYEVENTACTION_HH
#define MYTEST1_MYEVENTACTION_HH

#include "G4UserEventAction.hh"

#include "globals.hh"

class MyRunAction;

/// Event action class

class MyEventAction : public G4UserEventAction {
public:
  MyEventAction(MyRunAction* runaction);

  ~MyEventAction() override;

  void BeginOfEventAction(const G4Event *) override;

  void EndOfEventAction(const G4Event *) override;
};

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
#endif //MYTEST1_MYEVENTACTION_HH
