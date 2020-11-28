//
// Created by Samad Mazarei on 11/28/20.
// Copyright (c) 2020 California State University Channel Islands. All rights reserved.
//

#ifndef MYTEST1_MYPHYSICSLIST_HH
#define MYTEST1_MYPHYSICSLIST_HH

#include "globals.hh"
#include "G4VModularPhysicsList.hh"

class MyPhysicsList : public G4VModularPhysicsList {
public:
  MyPhysicsList();

  ~MyPhysicsList() override;

protected:
  // Construct particles and processes
  void ConstructParticle() override;

  void ConstructProcess() override;

  void SetCuts() override;

private:

  // hide assignment operator
  MyPhysicsList &operator=(const MyPhysicsList &right);

  MyPhysicsList(const MyPhysicsList &);

  G4VPhysicsConstructor *fEmPhysicsList;

  G4String fEmName;

  G4int fVerboseLevel;

};

#endif //MYTEST1_MYPHYSICSLIST_HH
