#pragma once
#ifndef LISTA_H
#define LISTA_H

#include "Nod.h"

//clasa listei
class Lista {
private:
    Nod* head;
public:
    Lista();
    void inserareLaInceput(int valoare);
    void stergereLaInceput();
    void afisareLista();
    ~Lista();
};

#endif
