//
// Created by Samad Mazarei on 10/6/20.
// Copyright (c) 2020 California State University Channel Islands. All rights reserved.
//

#ifndef MYTEST1_MYDETECTORCONSTRUCTION_HH
#define MYTEST1_MYDETECTORCONSTRUCTION_HH

#include "G4VUserDetectorConstruction.hh"
#include "globals.hh"

class G4VPhysicalVolume;

class G4GlobalMagFieldMessenger;

class G4LogicalVolume;

class MyDetectorConstruction : public G4VUserDetectorConstruction {
public:
  MyDetectorConstruction();

  ~MyDetectorConstruction() override;

  // virtual base methods
  G4VPhysicalVolume *Construct() override;

  void ConstructSDandField() override;


  G4LogicalVolume *GetScoringVolume() const { return fScoringVolume; }



protected:
  G4LogicalVolume *fScoringVolume;
  static G4ThreadLocal G4GlobalMagFieldMessenger *fMagFieldMessenger;

  // self defined methods
  void DefineMaterials();

  static void ConstructMaterials();

  G4VPhysicalVolume *DefineVolumes();

};

#endif //MYTEST1_MYDETECTORCONSTRUCTION_HH
