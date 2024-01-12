#include <iostream>
#include <cmath>
#include <vector>

class Punct {
private:
    double x; //abscisa
    double y; //ordonata

public:
    
    Punct() : x(0.0), y(0.0) {}

    //const cu 2 param
    Punct(double abscisa, double ordonata) : x(abscisa), y(ordonata) {}

    /*~Punct() {
        std::cout << "Distrugere punct: (" << x << ", " << y << ")\n";
    }*/
    
    //funcția prietenă calculare distanta
    friend double distanta(const Punct& p1, const Punct& p2);

    //calcul centru de greutate
    static Punct centruDeGreutate(const std::vector<Punct>& vectorPuncte) {
        double sumX = 0.0, sumY = 0.0;

        //suma absciselor si ordonatelor
        for (const Punct& punct : vectorPuncte) {
            sumX += punct.x;
            sumY += punct.y;
        }

        //media absciselor și ordonatelor
        double mediaX = sumX / vectorPuncte.size();
        double mediaY = sumY / vectorPuncte.size();

        return Punct(mediaX, mediaY);
    }

    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }
};



