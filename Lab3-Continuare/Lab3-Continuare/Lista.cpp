#include "Lista.h"
#include <iostream>

using namespace std;

//metode pentru clasa Lista
Lista::Lista() : head(nullptr) {}

void Lista::inserareLaInceput(int valoare) {
    Nod* nouNod = new Nod(valoare);
    nouNod->next = head;
    head = nouNod;
}

void Lista::stergereLaInceput() {
    if (head == nullptr) {
        cout << "Lista este goala. Nu se poate efectua stergerea.\n";
        return;
    }

    Nod* temp = head;
    head = head->next;
    delete temp;
}

void Lista::afisareLista() {
    Nod* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << "\n";
}

Lista::~Lista() {
    while (head != nullptr) {
        Nod* temp = head;
        head = head->next;
        delete temp;
    }
}
