#include <iostream>
#include "towar.h"
#include <cstdlib>

using namespace std;

spis::spis()
{
    poczatek = NULL;
}
////////////////////////////////////////////////////////
int Towar::dajkod()const
{
    return kod;
}
/////////////////////////////////////////////////////////
void Towar::zmienilosc(float _ilosc)
{
    ilosc=_ilosc;
}
////////////////////////////////////////////////////////
float Towar::dajilosc()const
{
    return ilosc;
}
////////////////////////////////////////////////////////
bool Towar::operator < (Towar t)const
{
    return kod<t.kod;
}
/////////////////////////////////////////////////////////
void spis::kompresuj()
{
    wezel * szukacz=poczatek;
    while(szukacz!=NULL)
    {
        while(szukacz -> nastepny !=NULL && szukacz -> nastepny -> dane.dajkod()==szukacz -> dane.dajkod())
        {
            wezel * killer=szukacz -> nastepny;
            szukacz->dane.zmienilosc(szukacz->dane.dajilosc()+killer->dane.dajilosc());
            szukacz->nastepny = killer->nastepny;
            delete killer;
        }
        szukacz=szukacz->nastepny;
    }
}
//////////////////////////////////////////////////////////
void spis::wstaw(Towar _dane)
{
    wezel * pred = NULL;
    wezel * succ = poczatek;
    while(succ != NULL && succ -> dane < _dane)
    {
        pred = succ;
        succ = succ -> nastepny;
    }
    wezel * p = new wezel(_dane, succ);
    if (pred != NULL)
        pred -> nastepny = p;
        else poczatek = p;
}
////////////////////////////////////////////////////////////
void spis::wypisz()const
{
    wezel * szukacz = poczatek;
    while(szukacz != NULL)
    {
        cout << "Kod produktu: " <<  szukacz -> dane.dajkod() << " Ilosc produktu:" << szukacz -> dane.dajilosc() << endl;
        szukacz=szukacz->nastepny;
    }
}
