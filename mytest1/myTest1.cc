//
// Created by Samad Mazarei on 10/6/20.
// Copyright (c) 2020 California State University Channel Islands. All rights reserved.

/// \file exampleB3a.cc
/// \brief Main program of the B3a example

#include <FTFP_BERT.hh>
#include <G4PhysListFactory.hh>
#include <G4StepLimiterPhysics.hh>
#include "G4Types.hh"

#ifdef G4MULTITHREADED
#include "G4MTRunManager.hh"
#else
#include "G4RunManager.hh"
#endif

#include "G4UImanager.hh"
#include "G4VisExecutive.hh"
#include "G4UIExecutive.hh"
#include "G4TScoreNtupleWriter.hh"

#include "Randomize.hh"

#include "MyDetectorConstruction.hh"

#include "MyActionInitialization.hh"
//#include "B3Analysis.hh"

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

int main(int argc,char** argv) {
  // Detect interactive mode (if no arguments) and define UI session
  //
  G4UIExecutive *ui = 0;
  if (argc == 1) {
    ui = new G4UIExecutive(argc, argv);
  }
  // ***************************************************
  // Optionally: choose a different Random engine...
  //
  // G4Random::setTheEngine(new CLHEP::MTwistEngine);
  // ***************************************************
  // Construct the default run manager
  //
#ifdef G4MULTITHREADED
  G4MTRunManager *runManager = new G4MTRunManager;
#else
  G4RunManager* runManager = new G4RunManager;
#endif

  // Set mandatory initialization classes
  //
  runManager->SetUserInitialization(new MyDetectorConstruction);

  // Using default predefined physics list - FTFP_BERT
  // from reading, seemingly robust,
  // By calling the factory, I added much more precise
  // set of em physics to the FTFP_BERT class (there are 4 classes of extended em physics, trade offs
  // between speed and precision
  G4PhysListFactory factory;
  auto physicsList = factory.GetReferencePhysList("FTFP_BERT_EMZ");
  physicsList->RegisterPhysics(new G4StepLimiterPhysics()); // TODO : Figure out if I need this
  runManager->SetUserInitialization(physicsList);

  // Set user action initialization
  //
  runManager->SetUserInitialization(new MyActionInitialization());

  // Initialize visualization
  //
  G4VisManager *visManager = new G4VisExecutive;
  // G4VisExecutive can take a verbosity argument - see /vis/verbose guidance.
  // G4VisManager* visManager = new G4VisExecutive("Quiet");
  visManager->Initialize();

  // Get the pointer to the User Interface manager
  G4UImanager *UImanager = G4UImanager::GetUIpointer();

  // Activate score ntuple writer
  // The Root output type (Root) is selected in B3Analysis.hh.
  // The verbose level can be also set via UI commands
  // /score/ntuple/writerVerbose level
  // TODO : uncomment after implimentation -> G4TScoreNtupleWriter<G4AnalysisManager> scoreNtupleWriter;
  // TODO : uncomment after implimentation -> scoreNtupleWriter.SetVerboseLevel(1);

  // Process macro or start UI session
  //
  if (!ui) {
    // batch mode
    G4String command = "/control/execute ";
    G4String fileName = argv[1];
    UImanager->ApplyCommand(command + fileName);
  } else {
    // interactive mode
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
