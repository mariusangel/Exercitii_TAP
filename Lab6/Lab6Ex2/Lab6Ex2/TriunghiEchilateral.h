#pragma once
#ifndef TRIUNGHIECHILATERAL_H
#define TRIUNGHIECHILATERAL_H

#include "TriunghiIsoscel.h"

class Echilateral : public Isoscel {
public:
    Echilateral(double l);
    //override
    double arie() override;
    double perimetru() override;
};

#endif
