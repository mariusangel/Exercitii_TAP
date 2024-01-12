#include <iostream>
#include "Punct2D.h"
#include <vector>
#include "Punct3D.h"

using namespace std;

int main()
{
    //nr puncte
    int n;
    cout << "n = ";
    cin >> n;

    //citere puncte in vect
    vector<Punct2D> vPuncte2D;
    for (int i = 0; i < n; i++)
    {
        Punct2D p2(0, 0);
        cout << "x si y: ";
        cin >> p2;
        vPuncte2D.push_back(p2);
    }

    cout << endl << "Primul punct 2D: " << vPuncte2D[0];

    //nr puncte 3D
    int m;
    cout << "\nm = ";
    cin >> m;

    vector<Punct3D> vPuncte3D;
    for (int i = 0; i < m; i++)
    {
        Punct3D p3(0, 0, 0);
        cout << "\nx, y si z: ";
        cin >> p3;
        vPuncte3D.push_back(p3);
    }

    cout << endl << "Primul punct 3D: " << vPuncte3D[0];

    cout << endl << "Distanta dintre primul si al doilea punct 2D: " << Punct2D::distanta(vPuncte2D[0], vPuncte2D[1]);

    cout << endl << "Distanta dintre primul si al doilea punct 3D: " << Punct3D::distanta(vPuncte3D[0], vPuncte3D[1]);

    return 0;
}
