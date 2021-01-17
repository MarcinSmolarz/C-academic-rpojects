#include <iostream>
#include "konto.h"

using namespace std;

int main()
{
    int n=0;
    cout << "Podaj ile kont chcesz wprowadzic do systemu: "; cin >> n;
    Konto tab[n];
    cout << "Wprowadz dane" << endl;
    for(int i=0; i<n; i++)
    {
        string im, na, nrk;
        double sa;
        cout << "Imie: "; cin >> im;
        cout << "Nazwisko: "; cin >> na;
        cout << "Nr. konta: "; cin >> nrk;
        cout << "Saldo: "; cin >> sa;
        cout << endl;
        tab[i].uzupelnij(im, na, nrk, sa);
    }
    for(int i=0; i<n; i++)
    {
        tab[i].opis();
    }
//    tab[0].wplac(257.40);
//    tab[1].wyplac(2000);
//    tab[2].wyplac(327.80);
//    for(int i=0; i<n; i++)
//    {
//        tab[i].opis();
//    }
    return 0;
}
