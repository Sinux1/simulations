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
  ~MyPhysicsList() ;

  void ConstructParticle() ;
  void ConstructProcess() ;
  void SetCuts() ;
};

#endif //MYTEST1_MYPHYSICSLIST_HH
