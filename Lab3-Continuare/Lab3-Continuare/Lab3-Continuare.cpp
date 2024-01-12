#include "Lista.h"
#include <iostream>

using namespace std;

//utilizare
int main() {
    Lista lista;

    lista.inserareLaInceput(3);
    lista.inserareLaInceput(5);
    lista.inserareLaInceput(7);

    cout << "Lista initiala: ";
    lista.afisareLista();

    lista.stergereLaInceput();
    cout << "Lista dupa stergere: ";
    lista.afisareLista();

    return 0;
}
