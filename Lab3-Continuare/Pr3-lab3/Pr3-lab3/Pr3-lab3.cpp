#include "Carte.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
    //vector carti
    vector<Carte> biblioteca;

    //adaugare carti
    biblioteca.emplace_back("Autor1", "Titlu1", "ISBN1", 20.0);
    biblioteca.emplace_back("Autor2", "Titlu2", "ISBN2", 25.0);
    biblioteca.emplace_back("Autor1", "Titlu3", "ISBN3", 30.0);

    //citire autor de la tastatura
    string autorCautat;
    cout << "Introduceti autorul pentru a afisa cartile: ";
    cin >> autorCautat;

    //afișare cărți pentru un anumit autor
    for (const auto& carte : biblioteca) {
        carte.AfisareCartiAutor(autorCautat);
    }

    //număr total de instanțe ale clasei Carte
    cout << "Numar total de carti: " << Carte::GetNumarCarti() << endl;

    return 0;
}
