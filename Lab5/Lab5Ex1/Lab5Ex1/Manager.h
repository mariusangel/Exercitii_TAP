#pragma once
#include "Angajat.h"

class Manager : public Angajat
{
private:
    int nrSubordonati;

public:

    Manager(double tarifOrar, int nrOre, int nrSubordonati);

    //func membru care return salariul managerului suprascrie getSalar din clasa Angajat
    double getSalar();
};
