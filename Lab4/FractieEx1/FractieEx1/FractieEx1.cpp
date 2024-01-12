
#include "FractieEx1.h"

//const implicit
Fractie::Fractie() : numarator(0), numitor(1) {}

//const cu un singur param
Fractie::Fractie(int numarator) : numarator(numarator), numitor(1) {}

//const cu doi param
Fractie::Fractie(int numarator, int numitor) : numarator(numarator), numitor(numitor) {}

//const de copiere
Fractie::Fractie(const Fractie& other) : numarator(other.numarator), numitor(other.numitor) {}

//destructor
Fractie::~Fractie() {}

int Fractie::getNumarator() const { return numarator; }

int Fractie::getNumitor() const { return numitor; }

void Fractie::setNumarator(int n) { numarator = n; }

void Fractie::setNumitor(int n) { numitor = n; }

//calculul CMMDC
int Fractie::cmmdc(int n1, int n2) {
    return (n2 == 0) ? n1 : cmmdc(n2, n1 % n2);
}

//calculul CMMMC
int Fractie::cmmmc(int n1, int n2) {
    return n1 * n2 / cmmdc(n1, n2);
}

//supraincarcare operator + adunare
Fractie Fractie::operator+(const Fractie& other) const {
    Fractie rezultat;
    rezultat.numarator = (numarator * other.numitor) + (other.numarator * numitor);
    rezultat.numitor = numitor * other.numitor;
    return rezultat;
}

// - pentru scădere
Fractie Fractie::operator-(const Fractie& other) const {
    Fractie rezultat;
    rezultat.numarator = (numarator * other.numitor) - (other.numarator * numitor);
    rezultat.numitor = numitor * other.numitor;
    return rezultat;
}

Fractie Fractie::operator*(const Fractie& other) const {
    Fractie rezultat;
    rezultat.numarator = numarator * other.numarator;
    rezultat.numitor = numitor * other.numitor;
    return rezultat;
}

Fractie Fractie::operator/(const Fractie& other) const {
    Fractie rezultat;
    rezultat.numarator = numarator * other.numitor;
    rezultat.numitor = numitor * other.numarator;
    return rezultat;
}

//simplificarea fractiei
void Fractie::simplifica() {
    int n = cmmdc(numarator, numitor);
    numarator = numarator / n;
    numitor = numitor / n;
}

//reciprocului fractiei
void Fractie::reciproca() {
    std::swap(numarator, numitor);
}

//supraincarcare pt comparare
bool Fractie::operator<(const Fractie& other) const {
    return (numarator * other.numitor < other.numarator * numitor);
}

bool Fractie::operator>(const Fractie& other) const {
    return (numarator * other.numitor > other.numarator * numitor);
}

bool Fractie::operator<=(const Fractie& other) const {
    return (numarator * other.numitor <= other.numarator * numitor);
}

bool Fractie::operator>=(const Fractie& other) const {
    return (numarator * other.numitor >= other.numarator * numitor);
}

bool Fractie::operator==(const Fractie& other) const {
    return (numarator * other.numitor == other.numarator * numitor);
}

bool Fractie::operator!=(const Fractie& other) const {
    return (numarator * other.numitor != other.numarator * numitor);
}

//adunare compusa
Fractie& Fractie::operator+=(const Fractie& other) {
    numarator = numarator * other.numitor + other.numarator * numitor;
    numitor = numitor * other.numitor;
    return *this;
}

//scădere compusa
Fractie& Fractie::operator-=(const Fractie& other) {
    numarator = numarator * other.numitor - other.numarator * numitor;
    numitor = numitor * other.numitor;
    return *this;
}

//înmulțire compusa
Fractie& Fractie::operator*=(const Fractie& other) {
    numarator *= other.numarator;
    numitor *= other.numitor;
    return *this;
}

//împărțire compusa
Fractie& Fractie::operator/=(const Fractie& other) {
    numarator *= other.numitor;
    numitor *= other.numarator;
    return *this;
}

//supraincarcare preinc
Fractie& Fractie::operator++() {
    numarator += numitor;
    return *this;
}

//postinc
Fractie Fractie::operator++(int) {
    Fractie temp(*this);
    numarator += numitor;
    return temp;
}

//predec
Fractie& Fractie::operator--() {
    numarator -= numitor;
    return *this;
}

//postdec
Fractie Fractie::operator--(int) {
    Fractie temp(*this);
    numarator -= numitor;
    return temp;
}

//=
Fractie& Fractie::operator=(const Fractie& other) {
    numarator = other.numarator;
    numitor = other.numitor;
    return *this;
}

//citire >>
std::istream& operator>>(std::istream& is, Fractie& fractie) {
    is >> fractie.numarator >> fractie.numitor;
    return is;
}

//afisare <<
std::ostream& operator<<(std::ostream& os, const Fractie& fractie) {
    os << fractie.numarator << "/" << fractie.numitor;
    return os;
}

