//
// Created by Samad Mazarei on 10/6/20.
// Copyright (c) 2020 California State University Channel Islands. All rights reserved.
//

#ifndef MYTEST1_MYDETECTORCONSTRUCTION_HH
#define MYTEST1_MYDETECTORCONSTRUCTION_HH
// This is the base class to inherit from
#include "G4VUserDetectorConstruction.hh"
#include "globals.hh"

class G4GlobalMagFieldMessenger;
class MyDetectorConstruction : public G4VUserDetectorConstruction {

public:
  // Constructor
  MyDetectorConstruction();

  // Destructor
  ~MyDetectorConstruction();

  // virtual base methods
  G4VPhysicalVolume *Construct();
  // optional -
  virtual void ConstructSDandField();

private:
  static G4ThreadLocal G4GlobalMagFieldMessenger*  fMagFieldMessenger;

  G4bool  fCheckOverlaps; // option to activate checking of volumes overlaps




};

#endif //MYTEST1_MYDETECTORCONSTRUCTION_HH
