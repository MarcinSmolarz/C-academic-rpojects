#include "konto.h"

Konto::Konto(string i, string n, string nr, double s):imie(i),nazwisko(n), nr_konta(nr), saldo(s) {}

Konto::~Konto()
{
    cout << "Konto uzytkownika " << imie << " " << nazwisko << " zostalo usuniete" << endl;
}

void Konto::uzupelnij(string i, string n, string nr, double s)
{
    imie=i;
    nazwisko=n;
    nr_konta=nr;
    saldo=s;
}

void Konto::opis()const
{
    cout << "Konto uzytkownika: " << imie << " " << nazwisko << " o numerze: " << nr_konta << endl;
    cout << "Stan konta: " << saldo << " zl" << endl << "---------------" << endl;
}

void Konto::wplac(double w)
{
    saldo=saldo+w;
    cout << "Wplacono " << w << " zl na konto uzytkownika " << imie << " " << nazwisko << endl << "---------------" << endl;
}

void Konto::wyplac(double w)
{
    if(w>saldo)
    {
        cout << "Brak srodkow na koncie" << endl << "---------------" << endl;
    }
    else
    {
        saldo=saldo-w;
        cout << "Wyplacono " << w << " zl z konta uzytkownika " << imie << " " << nazwisko << endl << "---------------" << endl;
    }
}
