
//
// Created by Samad Mazarei on 11/28/20.
// Copyright (c) 2020 California State University Channel Islands. All rights reserved.
//
#include <G4Box.hh>                     // creating a default box for my world
#include "G4LogicalVolume.hh"           // for building logical volume
#include <G4PVPlacement.hh>             // building a physical volume from a logical
#include <G4SystemOfUnits.hh>           // for use of units such as cm, cm3, etc, I believe it inherits from CHLEP
#include <G4Material.hh>                // for galactic material to fill world (vacuum)
#include <G4NistManager.hh>             // for loading up materials
#include <G4AutoDelete.hh>              // field-messenger needs to be registered for deletion
#include <G4GlobalMagFieldMessenger.hh> // for mag field messenger
#include "MyDetectorConstruction.hh"    // My class header


// Constructor for class MyDetectorConstruction calls base class constructor and then sets fScoringVolume(nullptr)
MyDetectorConstruction::MyDetectorConstruction() : G4VUserDetectorConstruction(), fScoringVolume(nullptr) {}

// Destructor ~ hope my syntax is correct
MyDetectorConstruction::~MyDetectorConstruction() {}

// Implementation of pure virtual method Construct()
// After building the geometry, returns a pointer to the
// world volume
G4VPhysicalVolume *MyDetectorConstruction::Construct() {
  G4VPhysicalVolume *dummyWorldVolume = nullptr;
  // ... Build geometry
  return dummyWorldVolume;


}

// Optional Implementation for sensitive values and EM sensors
void MyDetectorConstruction::ConstructSDandField() {
  // ...
}
