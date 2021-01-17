#include <iostream>
#include "plansza.h"
#include <cstring>

using namespace std;

Plansza::Plansza()
{
    dlugosc=0;
    szerokosc=0;
    plansza=new * char[dlugosc][szerokosc];
}

Plansza::Plansza(int d, int sz)
{
    this->plansza= new char*[d];
    for(int i=0; i<d; i++)
    {
        plansza[i]=new char[sz];
    }
}

Plansza::~Plansza()
{
    delete [][] plansza;
}
