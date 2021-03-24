//
// Created by Samad Mazarei on 10/19/20.
// Copyright (c) 2020 California State University Channel Islands. All rights reserved.
//

#ifndef MYTEST1_MYACTIONINITIALIZATION_HH
#define MYTEST1_MYACTIONINITIALIZATION_HH


#include "G4VUserActionInitialization.hh"

class MyDetectorConstruction;

/// Action initialization class.
///

class MyActionInitialization : public G4VUserActionInitialization {
public:
  MyActionInitialization();

  ~MyActionInitialization() override;

  void BuildForMaster() const override;

  void Build() const override;
};

#endif //MYTEST1_MYACTIONINITIALIZATION_HH
