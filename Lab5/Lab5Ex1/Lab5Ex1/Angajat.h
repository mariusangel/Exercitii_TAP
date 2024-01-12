#pragma once
#include <iostream>

using namespace std;


class Angajat
{
private:
    double tarifOrar;
    int nrOre;

public:
    //constructori
    Angajat(int nrOre);

    
    Angajat(double tarifOrar, int nrOre);

    //constr de copiere
    Angajat(Angajat& other);

    ~Angajat();

    Angajat& operator=(const Angajat& other);

    //supraincarcarea op de citire
    friend istream& operator>>(istream& is, Angajat& a);

    friend ostream& operator<<(ostream& os, const Angajat& a);

    //funct membru care returnează sal
    double getSalar();

    double getTarifOrar();
};
