#pragma once
#ifndef TRIUNGHIISOSCEL_H
#define TRIUNGHIISOSCEL_H

#include "Triunghi.h"

class Isoscel : public Triunghi {
public:
    Isoscel(double lEgala, double lDif);
    //override
    double arie() override;
    double perimetru() override;
};

#endif
