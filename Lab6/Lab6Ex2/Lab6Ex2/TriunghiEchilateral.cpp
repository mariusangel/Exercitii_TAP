#include "TriunghiEchilateral.h"
#include <cmath>

//constr
Echilateral::Echilateral(double l) : Isoscel(l, l) {}


double Echilateral::arie() {

    //formula calculul arie triunghi echi
    return sqrt(3) / 4 * pow(l1, 2);
}


double Echilateral::perimetru() {
    //perimetru triunghi echilateral este suma tuturor lat
    return l1 + l2 + l3;
}
