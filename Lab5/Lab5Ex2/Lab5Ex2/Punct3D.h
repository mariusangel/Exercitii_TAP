#ifndef PUNCT3D_H
#define PUNCT3D_H

#include <iostream>
#include <cmath>

class Punct3D {
private:
    double x, y, z;

public:
    Punct3D(double x, double y, double z);
    Punct3D(const Punct3D& other);
    ~Punct3D();

    Punct3D& operator=(const Punct3D& other);

    bool operator<(const Punct3D& other) const;
    bool operator>(const Punct3D& other) const;
    bool operator<=(const Punct3D& other) const;
    bool operator>=(const Punct3D& other) const;
    bool operator==(const Punct3D& other) const;
    bool operator!=(const Punct3D& other) const;

    Punct3D operator+(const Punct3D& other) const;
    Punct3D operator-(const Punct3D& other) const;
    Punct3D operator*(double scalar) const;
    Punct3D operator/(double scalar) const;

    Punct3D& operator+=(const Punct3D& other);
    Punct3D& operator-=(const Punct3D& other);
    Punct3D& operator*=(double scalar);
    Punct3D& operator/=(double scalar);

    Punct3D& operator++();
    Punct3D operator++(int);
    Punct3D& operator--();
    Punct3D operator--(int);

    friend std::ostream& operator<<(std::ostream& os, const Punct3D& punct);
    friend std::istream& operator>>(std::istream& is, Punct3D& punct);

    static double distanta(const Punct3D& p1, const Punct3D& p2);
};

#endif // PUNCT3D_H
