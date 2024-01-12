#include "TriunghiIsoscel.h"
#include <cmath>

Isoscel::Isoscel(double lEgala, double lDif) : Triunghi(lEgala, lEgala, lDif) {}

double Isoscel::arie() {
    //calcul inaltime triunghi isoscel
    double inaltime = sqrt(pow(l1, 2) - pow(l3 / 2, 2));

    //formula arie pt triungh isosce
    return (l3 * inaltime) / 2;
}

double Isoscel::perimetru() {
    //perimetru
    return l1 + l2 + l3;
}
