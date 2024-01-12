#include <iostream>
#include "Triunghi.h"
#include "Dreptunghic.h"
#include "TriunghiIsoscel.h"
#include "TriunghiEchilateral.h"
#include "DreptunghicIsoscel.h"

using namespace std;

int main()
{
    Isoscel a(1, 3);
    cout << a.arie() << " " << a.perimetru() << endl;

    Echilateral b(5);
    cout << b.arie() << " " << b.perimetru() << endl;

    Dreptunghic c(1, 2, 3);
    cout << c.arie() << " " << c.perimetru() << endl;

    DreptunghicIsoscel d(7, 9);
    cout << d.arie() << " " << d.perimetru() << endl;
}