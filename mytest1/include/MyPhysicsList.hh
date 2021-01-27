//
// Created by Samad Mazarei on 11/28/20.
// Copyright (c) 2020 California State University Channel Islands. All rights reserved.
//

#ifndef MYTEST1_MYPHYSICSLIST_HH
#define MYTEST1_MYPHYSICSLIST_HH

#include "globals.hh"
#include "G4VModularPhysicsList.hh"

class MyPhysicsList : public G4VUserPhysicsList {
public:
  // ctr
  MyPhysicsList();
  // dtr
  ~MyPhysicsList() ;
  // virtual, implement
  void ConstructParticle() ;
  // virtual, implement
  void ConstructProcess() ;
  // virtual, and optional for G4VUserPhysicsList
  void SetCuts() ;
  // helper for defining processes
  void ConstructGeneral();
};

#endif //MYTEST1_MYPHYSICSLIST_HH
