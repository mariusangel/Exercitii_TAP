#include <iostream>
#include <vector>
using namespace std;

//maximul intr un vector
template <typename T>
T gasesteMaxim(vector<T> vectorT) {
    T elMax = vectorT[0];
    for (T element : vectorT) {
        if (element > elMax)
            elMax = element;
    }
    return elMax;
}

//minimul intr un vector
template <typename T>
T gasesteMinim(vector<T> vectorT) {
    T elMin = vectorT[0];
    for (T element : vectorT) {
        if (element < elMin)
            elMin = element;
    }
    return elMin;
}

//cautare secventiala intr un vector
template <typename T>
int cautareSecventiala(vector<T> vectorT, T elCautat) {
    for (int i = 0; i < vectorT.size(); i++) {
        if (vectorT[i] == elCautat)
            return i;
    }
    return -1;
}

//sortare
template <typename T>
void sorteaza(vector<T>& vectorT) {
    int n = vectorT.size();
    bool schimbat;

    for (int i = 0; i < n - 1; i++) {
        schimbat = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (vectorT[j] > vectorT[j + 1]) {
                swap(vectorT[j], vectorT[j + 1]);
                schimbat = true;
            }
        }
        if (!schimbat) {
            break;
        }
    }
}

//sortare
template <>
void sorteaza(vector<char>& vectorC) {
    int n = vectorC.size();
    bool schimbat;
    for (int i = 0; i < n - 1; i++) {
        schimbat = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (vectorC[j] < vectorC[j + 1]) {
                swap(vectorC[j], vectorC[j + 1]);
                schimbat = true;
            }
        }
        if (!schimbat) {
            break;
        }
    }
}

//cautare binara intr un vector
template <typename T>
int cautareBinara(vector<T> vectorT, T elCautat) {
    sorteaza(vectorT);
    int stanga = 0;
    int dreapta = vectorT.size() - 1;

    while (stanga <= dreapta) {
        int mijloc = stanga + (dreapta - stanga) / 2;

        if (vectorT[mijloc] == elCautat)
            return mijloc;

        if (vectorT[mijloc] < elCautat)
            stanga = mijloc + 1;
        else
            dreapta = mijloc - 1;
    }

    return -1;
}

int main() {
    //vectori de intregi
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(3);
    vec.push_back(2);
    vec.push_back(2);
    int maxim = gasesteMaxim(vec);
    int minim = gasesteMinim(vec);
    int index1 = cautareSecventiala(vec, 3);
    int index2 = cautareBinara(vec, 3);
    sorteaza(vec);
    cout << "Maxim: " << maxim << endl << "Minim: " << minim << endl << "Index cautare secventiala: " << index1 << endl << "Index cautare binara: " << index2 << endl;
    for (int i : vec) {
        cout << endl << i;
    }

    //vect de caractere
    vector<char> vecChar;
    vecChar.push_back('a');
    vecChar.push_back('b');
    vecChar.push_back('c');
    vecChar.push_back('d');
    char maximC = gasesteMaxim(vecChar);
    char minimC = gasesteMinim(vecChar);
    int index1C = cautareSecventiala(vecChar, 'i');
    int index2C = cautareBinara(vecChar, 'i');
    sorteaza(vecChar);
    cout << "Maxim char: " << maximC << endl << "Minim char: " << minimC << endl << "Index cautare secventiala char: " << index1C << endl << "Index cautare binara char: " << index2C << endl;
    for (char i : vecChar) {
        cout << endl << i;
    }

    return 0;
}
