//
// Created by Samad Mazarei on 2/4/21.
// Copyright (c) 2021 California State University Channel Islands. All rights reserved.
//

#ifndef MYTEST1_MYSTEPPINGACTION_HH
#define MYTEST1_MYSTEPPINGACTION_HH
#include "G4UserSteppingAction.hh"
#include "globals.hh"

class MyEventAction;

class G4LogicalVolume;

/// Stepping action class
///

class MySteppingAction : public G4UserSteppingAction
{
public:
  MySteppingAction(MyEventAction* eventAction);
  virtual ~MySteppingAction();

  // method from the base class
  virtual void UserSteppingAction(const G4Step*);

private:

};

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#endif //MYTEST1_MYSTEPPINGACTION_HH
