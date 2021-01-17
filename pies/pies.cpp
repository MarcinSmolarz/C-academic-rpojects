#include "pies.h"

Pies::Pies(string i, int w):imie(i), wiek(w){}

Pies::~Pies()
{
    cout << "Usunieto psa o imieniu: " << imie << " ,mial lat: " << wiek << endl;
}

void Pies::opis()const
{
    cout << "Imie: " << imie << endl;
    cout << "Wiek: " << wiek << endl;
}

void Pies::ustaw(string i, int w)
{
    imie = i;
    wiek = w;
}

void Pies::szczekaj()const
{
    cout << "szczek szczek" << endl;
}
