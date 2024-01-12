#include <iostream>
#include <string>
#include "Angajat.h"

using namespace std;

Angajat::Angajat(string nume, string CNP, string email, string departament) : Persoana(CNP, nume), email(email), departament(departament) {}

string Angajat::detalii() {
	return "Angajatul " + this->nume + " este in departamentul " + this->departament + ".\n";
}

string Angajat::getDepartament() {
	return this->departament;
}