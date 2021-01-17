#include "produkt.h"

//Produkt::Produkt() // :kod(0), nazwa("brak"), cena(0) {} - lista inicjalizacyjna, mozna jej uzyc w przypadku konstruktora z prostych przypisan
//{
//    kod = 0;
//    nazwa = "brak";
//    cena = 0.0;
//}

Produkt::Produkt(int k, string n, float c)
{
    kod = k;
    nazwa = n;
    cena = c;
}
//alternatywnie Produkt::Produkt():kod(k), nazwa(n), cena(c) {}

Produkt::~Produkt()
{
    cout << "Usunieto produkt: " << nazwa << endl;
}

void Produkt::wypisz()const
{
    cout << "Kod produktu: " << kod << endl;
    cout << "Nazwa produktu: " << nazwa << endl;
    cout << "Cena: " << cena << " zl" << endl;
    cout << "----------------------------------------" << endl;
}

void Produkt::wstaw(int k, string n, float c)
{
    kod=k;
    nazwa=n;
    cena=c;
}

