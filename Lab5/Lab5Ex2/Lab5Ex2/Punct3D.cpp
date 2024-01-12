#include "Punct3D.h"

Punct3D::Punct3D(double x, double y, double z) : x(x), y(y), z(z) {
}

Punct3D::Punct3D(const Punct3D& other) : x(other.x), y(other.y), z(other.z) {
    //copierea membrilor
}

Punct3D::~Punct3D() {
    //distrugere
}

Punct3D& Punct3D::operator=(const Punct3D& other) {
    //atribuire
    if (this != &other) {
        x = other.x;
        y = other.y;
        z = other.z;
    }
    return *this;
}

bool Punct3D::operator<(const Punct3D& other) const {
    //comparatie intre coordonatele x, y, z "<"
    if (x != other.x)
        return x < other.x;
    if (y != other.y)
        return y < other.y;
    return z < other.z;
}

bool Punct3D::operator>(const Punct3D& other) const {
    //comparatie intre coordonatele x, y, z ">"
    if (x != other.x)
        return x > other.x;
    if (y != other.y)
        return y > other.y;
    return z > other.z;
}

Punct3D Punct3D::operator+(const Punct3D& other) const {

    return Punct3D(x + other.x, y + other.y, z + other.z);
}

Punct3D Punct3D::operator-(const Punct3D& other) const {

    return Punct3D(x - other.x, y - other.y, z - other.z);
}

Punct3D Punct3D::operator*(double scalar) const {

    return Punct3D(x * scalar, y * scalar, z * scalar);
}

Punct3D Punct3D::operator/(double scalar) const {

    if (scalar != 0) {
        return Punct3D(x / scalar, y / scalar, z / scalar);
    }
    else {
     
        throw std::invalid_argument("impartire la 0");
    }
}

Punct3D& Punct3D::operator+=(const Punct3D& other) {

    x += other.x;
    y += other.y;
    z += other.z;
    return *this;
}

Punct3D& Punct3D::operator-=(const Punct3D& other) {

    x -= other.x;
    y -= other.y;
    z -= other.z;
    return *this;
}

Punct3D& Punct3D::operator*=(double scalar) {

    x *= scalar;
    y *= scalar;
    z *= scalar;
    return *this;
}

Punct3D& Punct3D::operator/=(double scalar) {

    if (scalar != 0) {
        x /= scalar;
        y /= scalar;
        z /= scalar;
    }
    else {
        
        throw std::invalid_argument("impartire la 0");
    }
    return *this;
}

Punct3D& Punct3D::operator++() {
    //operator prefixat
    x++;
    y++;
    z++;
    return *this;
}

Punct3D Punct3D::operator++(int) {
    //operator sufixat
    Punct3D temp(*this);
    operator++();
    return temp;
}

Punct3D& Punct3D::operator--() {
    //operator decrementare prefixat
    x--;
    y--;
    z--;
    return *this;
}

Punct3D Punct3D::operator--(int) {
    //decrementare sufixat
    Punct3D temp(*this);
    operator--();
    return temp;
}

std::ostream& operator<<(std::ostream& os, const Punct3D& punct) {

    os << "(" << punct.x << ", " << punct.y << ", " << punct.z << ")";
    return os;
}

std::istream& operator>>(std::istream& is, Punct3D& punct) {

    is >> punct.x >> punct.y >> punct.z;
    return is;
}

double Punct3D::distanta(const Punct3D& p1, const Punct3D& p2) {
    //distanta
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;
    double dz = p2.z - p1.z;
    return std::sqrt(dx * dx + dy * dy + dz * dz);
}


