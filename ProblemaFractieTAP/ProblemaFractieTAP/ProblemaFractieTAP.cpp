
#include <iostream>

class Fractie {
private:
    int numarator;
    int numitor;

public:
    //constructor fără param
    Fractie() : numarator(0), numitor(1) {}

    //constructor cu un singur param
    Fractie(int numarator) : numarator(numarator), numitor(1) {}

    //constructor cu 2 param
    Fractie(int numarator, int numitor) : numarator(numarator), numitor(numitor) {
        simplifica();
    }

    //adunare
    Fractie aduna(const Fractie& other) const {
        Fractie rezultat;
        rezultat.numarator = numarator * other.numitor + other.numarator * numitor;
        rezultat.numitor = numitor * other.numitor;
        rezultat.simplifica();
        return rezultat;
    }

    //scadere
    Fractie scade(const Fractie& other) const {
        Fractie rezultat;
        rezultat.numarator = numarator * other.numitor - other.numarator * numitor;
        rezultat.numitor = numitor * other.numitor;
        rezultat.simplifica();
        return rezultat;
    }

    //inmultire
    Fractie inmulteste(const Fractie& other) const {
        Fractie rezultat;
        rezultat.numarator = numarator * other.numarator;
        rezultat.numitor = numitor * other.numitor;
        rezultat.simplifica();
        return rezultat;
    }

    //impartire
    Fractie imparte(const Fractie& other) const {
        Fractie rezultat;
        rezultat.numarator = numarator * other.numitor;
        rezultat.numitor = numitor * other.numarator;
        rezultat.simplifica();
        return rezultat;
    }

    //simplificarea fractiei
    void simplifica() {
        int comun_divizor = gcd(numarator, numitor);
        numarator /= comun_divizor;
        numitor /= comun_divizor;
    }

    //cel mai mare divizor comun
    int gcd(int a, int b) {
        while (b) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    //egalitate/
    bool egal(const Fractie& other) const {
        return (numarator * other.numitor == other.numarator * numitor);
    }


    //afișarea fractiei
    void afisare() {
        std::cout << numarator << "/" << numitor << std::endl;
    }
};

int main() {
 
    Fractie fractie1;
    fractie1.afisare();

    Fractie fractie2(3);
    fractie2.afisare();

    Fractie fractie3(6, 9);
    fractie3.afisare();

    Fractie suma = fractie1.aduna(fractie2);
    std::cout << "Suma: ";
    suma.afisare();

    Fractie diferenta = fractie1.scade(fractie2);
    std::cout << "Diferenta: ";
    diferenta.afisare();

    Fractie produs = fractie1.inmulteste(fractie2);
    std::cout << "Produs: ";
    produs.afisare();

    Fractie raport = fractie1.imparte(fractie2);
    std::cout << "Raport: ";
    raport.afisare();

    //egalitate
    if (fractie1.egal(fractie3)) {
        std::cout << "Fractie1 si Fractie3 sunt egale.\n";
    }
    else {
        std::cout << "Fractie1 si Fractie3 nu sunt egale.\n";
    }

    return 0;
}
