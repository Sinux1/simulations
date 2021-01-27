
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


// Constructor for class MyDetectorConstruction calls base class constructor.

MyDetectorConstruction::MyDetectorConstruction() : G4VUserDetectorConstruction() {}

// Destructor ~ hope my syntax is correct
MyDetectorConstruction::~MyDetectorConstruction() {}

// Build detector, return world volume
G4VPhysicalVolume *MyDetectorConstruction::Construct() {
  // My materials
  auto nistManager = G4NistManager::Instance();
  // There is a 'low density air' that I think may be more useful to
  // our use case ...
  // Vacuum "Galactic"
  nistManager->FindOrBuildMaterial("G4_Galactic");

  // My volume
  auto defaultMaterial = G4Material::GetMaterial("G4_Galactic");
  // ******************************************************************

  // For now, arbitrary measurements
  // This is where the volumes will be defined
  // solid->logical->physical
  auto worldSizeXY = 12 * cm;
  auto worldSizeZ = 6 * cm;
  // Option to switch on/off checking of volumes overlaps
  //
  G4bool checkOverlaps = true; // I have no idea what this does yet

  // The geometrical dimension of my world
  auto worldSolid // recall that it is in half sizes
          = new G4Box("World", worldSizeXY / 2, worldSizeXY / 2, worldSizeZ / 2);

  // The logical volume is the solid-geometry with mass (material!)
  auto worldLogicalVolume
          = new G4LogicalVolume(worldSolid, defaultMaterial, "World");

  // The physical volume is the logical volume with placement
  auto worldPhysicalVolume
          = new G4PVPlacement(
                  0,                // no rotation
                  G4ThreeVector(),  // at (0,0,0)
                  worldLogicalVolume,          // its logical volume
                  "World",          // its name
                  0,                // its mother  volume
                  false,            // no boolean operation
                  0,                // copy number
                  checkOverlaps);  // checking overlaps

  return worldPhysicalVolume;


}

// Optional Implementation for sensitive values and EM sensors
/*
void MyDetectorConstruction::ConstructSDandField() {
  // ... Waiting until I have a working proton
}
*/