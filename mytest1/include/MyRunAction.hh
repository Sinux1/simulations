//
// Created by Samad Mazarei on 10/30/20.
// Copyright (c) 2020 California State University Channel Islands. All rights reserved.
//

#ifndef MYTEST1_MYRUNACTION_HH
#define MYTEST1_MYRUNACTION_HH

#include "G4UserRunAction.hh"
#include "globals.hh"

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

class G4Run;

/// Run action class

class MyRunAction : public G4UserRunAction
{
public:
    MyRunAction();
    ~MyRunAction() override;

    void BeginOfRunAction(const G4Run* run) override;
    void   EndOfRunAction(const G4Run* run) override;
};

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......


#endif //MYTEST1_MYRUNACTION_HH
