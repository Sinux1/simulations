//
// Created by Samad Mazarei on 10/6/20.
// Copyright (c) 2020 California State University Channel Islands. All rights reserved.
//

#ifndef MYTEST1_MYDETECTORCONSTRUCTION_HH
#define MYTEST1_MYDETECTORCONSTRUCTION_HH
// This is the base class to inherit from
#include "G4VUserDetectorConstruction.hh"
#include "globals.hh"



class MyDetectorConstruction : public G4VUserDetectorConstruction {
public:
  // Constructor
  MyDetectorConstruction();
  // Destructor
  ~MyDetectorConstruction() override;
  // virtual base methods
  G4VPhysicalVolume *Construct() override;
  // optional -
  void ConstructSDandField() override;

protected:


};

#endif //MYTEST1_MYDETECTORCONSTRUCTION_HH
