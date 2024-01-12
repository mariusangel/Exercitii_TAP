#ifndef CARTE_H
#define CARTE_H

#include <string>
#include <iostream>

class Carte {
private:
    std::string autor;
    std::string titlu;
    std::string ISBN;
    double pret;
    static int numarCarti;

public:
    //constr
    Carte(std::string autor, std::string titlu, std::string ISBN, double pret);

    //metode
    std::string GetAutor() const;
    std::string GetTitlu() const;
    std::string GetISBN() const;
    double GetPret() const;
    void AfisareCartiAutor(const std::string& autorCautat) const;

    //nr total instante static
    static int GetNumarCarti();
};

#endif
