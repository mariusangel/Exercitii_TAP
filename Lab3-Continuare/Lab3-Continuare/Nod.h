#ifndef NOD_H
#define NOD_H

//clasa Nod
class Nod {
private:
    int data; //datele stocate în nod
    Nod* next; //pointer către nodul următor
public:
    Nod(int valoare);
    friend class Lista;
};

#endif#pragma once
