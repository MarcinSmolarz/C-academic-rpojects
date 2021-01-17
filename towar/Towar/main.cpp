#include <iostream>
#include "towar.h"

using namespace std;

int main()
{
    spis s;
    for(int i=0; i<5; i++)
    {
        int kod;
        float ilosc;
        cout << "Podaj kod produktu: "; cin >> kod;
        cout << "Podaj ilosc produktu: "; cin >> ilosc;
        Towar t(kod, ilosc);
        s.wstaw(t);
    }
    s.wypisz();
    s.kompresuj();
    cout << "Kompresja: " << endl;
    s.wypisz();
    return 0;
}
