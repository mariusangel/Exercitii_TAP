#include <iostream>
#include <cmath>
#include <vector>
#include "Punct.cpp"

class Dreapta {
private:
    double m;  //panta
    double n;  //ordonata

public:
    //constructor
    Dreapta(double panta = 1.0, double ordonata = 0.0) : m(panta), n(ordonata) {}

    //constructor de copiere
    Dreapta(const Dreapta& other) : m(other.m), n(other.n) {}

    //aflare y in functie de x
    double calculareY(double x) const {
        return m * x + n;
    }

    //afisare ecuatie
    void afisareEcuation() const {
        std::cout << "y = " << m << "x + " << n << std::endl;
    }
};

double distanta(const Punct& p1, const Punct& p2) {
    return std::sqrt(std::pow(p2.x - p1.x, 2) + std::pow(p2.y - p1.y, 2));
}


int main() {

    Dreapta dreapta1;  //constr cu valori implicite m=1,n=0
    dreapta1.afisareEcuation();

    Dreapta dreapta2(2.5, 3.0);  //constr cu 2 parametrii m=2.5,n=3.0
    dreapta2.afisareEcuation();

    Dreapta dreapta3 = dreapta1;  //constr de copiere
    dreapta3.afisareEcuation();
    
    int n;
    std::cout << "Introduceti numarul de puncte: ";
    std::cin >> n;

    //vector de instante
    std::vector<Punct> vectorPuncte;

    //initializare vector
    for (int i = 0; i < n; ++i) {
        double abscisa, ordonata;
        std::cout << "Introduceti abscisa pentru punctul " << i + 1 << ": ";
        std::cin >> abscisa;
        std::cout << "Introduceti ordonata pentru punctul " << i + 1 << ": ";
        std::cin >> ordonata;

        Punct punct(abscisa, ordonata);
        vectorPuncte.push_back(punct);
    }

    //afisare distanta dintre 2puncte
    for (int i = 0; i < n - 1; ++i) {
        double d = distanta(vectorPuncte[i], vectorPuncte[i + 1]);
        std::cout << "Distanta dintre punctul " << i + 1 << " si punctul " << i + 2 << ": " << d << std::endl;
    }

    Punct centrulDeGreutate = Punct::centruDeGreutate(vectorPuncte);
    std::cout << "Centrul de greutate al punctelor este: (" << centrulDeGreutate.getX() << ", " << centrulDeGreutate.getY() << ")\n";

    return 0;
}