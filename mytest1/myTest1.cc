//
// Created by Samad Mazarei on 10/6/20.
// Copyright (c) 2020 California State University Channel Islands. All rights reserved.

#include <G4VModularPhysicsList.hh>
#include <QGSP_BERT.hh>
#include "G4RunManager.hh"
#include "G4Types.hh"
#include "G4UImanager.hh"
#include "G4VisExecutive.hh"
#include "G4UIExecutive.hh"
#include "G4TScoreNtupleWriter.hh"
// User defined classes
#include "MyDetectorConstruction.hh"
#include "MyActionInitialization.hh"


//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

int main(int argc, char **argv) {
  // Detect interactive mode (if no arguments) and define UI session
  // TODO: Configure for interactive default for now
  G4UIExecutive *ui = 0;
  if (argc == 1) {
    ui = new G4UIExecutive(argc, argv);
  }


  // Returns pointer to run manager
  G4RunManager* runManager = new G4RunManager;
   // Register Detector Constructor with run manager
  runManager->SetUserInitialization(new MyDetectorConstruction);

  // Physics list
  G4VModularPhysicsList* physicsList = new QGSP_BERT;
  physicsList->SetVerboseLevel(1);
  runManager->SetUserInitialization(physicsList);

  // Register Action Initialization with run manager (user actions)
  runManager->SetUserInitialization(new MyActionInitialization()); // <- TODO

  // Initialize visualization
  //
  G4VisManager *visManager = new G4VisExecutive;
  // G4VisExecutive can take a verbosity argument - see /vis/verbose guidance.
  // G4VisManager* visManager = new G4VisExecutive("Quiet");
  visManager->Initialize();

  // Get the pointer to the User Interface manager
  G4UImanager *UImanager = G4UImanager::GetUIpointer();


  // Process macro or start UI session
  //
  if (!ui) {
    // batch mode
    G4String command = "/control/execute ";
    G4String fileName = argv[1];
    UImanager->ApplyCommand(command + fileName);
  } else {
    // interactive mode - TODO: Figure this part out asap
    UImanager->ApplyCommand("/control/execute init_vis.mac");
    ui->SessionStart();
    delete ui;
  }

  // Job termination
  // Free the store: user actions, physics_list and detector_description are
  // owned and deleted by the run manager, so they should not be deleted
  // in the main() program !

  delete visManager;
  delete runManager;
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo.....
