#include "Carte.h"

//membru static
int Carte::numarCarti = 0;

//constr
Carte::Carte(std::string autor, std::string titlu, std::string ISBN, double pret)
    : autor(autor), titlu(titlu), ISBN(ISBN), pret(pret) {
    numarCarti++;
}

//metode
std::string Carte::GetAutor() const {
    return autor;
}

std::string Carte::GetTitlu() const {
    return titlu;
}

std::string Carte::GetISBN() const {
    return ISBN;
}

double Carte::GetPret() const {
    return pret;
}

void Carte::AfisareCartiAutor(const std::string& autorCautat) const {
    if (autor == autorCautat) {
        std::cout << "Autor: " << autor << ", Titlu: " << titlu << ", ISBN: " << ISBN << ", Pret: " << pret << std::endl;
    }
}

int Carte::GetNumarCarti() {
    return numarCarti;
}
