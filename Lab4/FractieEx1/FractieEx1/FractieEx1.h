#pragma once
#ifndef FRACTIE_H
#define FRACTIE_H

#include <iostream>

class Fractie
{
private:
    int numarator;
    int numitor;

public:
    Fractie();
    Fractie(int numarator);
    Fractie(int numarator, int numitor);
    Fractie(const Fractie&);
    ~Fractie();

    //op aritmetici
    Fractie operator+(const Fractie& other) const;
    Fractie operator-(const Fractie& other) const;
    Fractie operator*(const Fractie& other) const;
    Fractie operator/(const Fractie& other) const;

    //op de comparare
    bool operator<(const Fractie& other) const;
    bool operator>(const Fractie& other) const;
    bool operator<=(const Fractie& other) const;
    bool operator>=(const Fractie& other) const;
    bool operator==(const Fractie& other) const;
    bool operator!=(const Fractie& other) const;

    //operatori compuși
    Fractie& operator+=(const Fractie& other);
    Fractie& operator-=(const Fractie& other);
    Fractie& operator*=(const Fractie& other);
    Fractie& operator/=(const Fractie& other);

    Fractie& operator++(); //preinc
    Fractie operator++(int); //postinc
    Fractie& operator--(); //predec
    Fractie operator--(int); //postdec

    //atribuire
    Fractie& operator=(const Fractie& other);

    //citire/afisare
    friend std::istream& operator>>(std::istream& is, Fractie& fractie);
    friend std::ostream& operator<<(std::ostream& os, const Fractie& fractie);

    
    int getNumarator() const;
    int getNumitor() const;
    void setNumarator(int n);
    void setNumitor(int n);
    int cmmdc(int n1, int n2);
    int cmmmc(int n1, int n2);
    void simplifica();
    void reciproca();
};
#endif
