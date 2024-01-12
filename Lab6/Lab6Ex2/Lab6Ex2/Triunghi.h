#pragma once
#pragma once
#include <cmath>

class Triunghi {
protected:

    double l1, l2, l3;

public:
    //constr
    Triunghi(double l1, double l2, double l3);
    //metoda virtuala
    virtual double perimetru() = 0;

    virtual double arie() = 0;
};

