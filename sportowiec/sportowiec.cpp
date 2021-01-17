#include "sportowiec.h"
#include <cstring>
#include <iostream>

using namespace std;

int Sportowiec::ile=0;

int Sportowiec::getIle()
{
    return ile;
}

Sportowiec::Sportowiec()
{
    nazwisko=new char[strlen("brak")+1]; // jedna z 2 metod tworzenia takiej tablicy
    strcpy(nazwisko, "brak");
    sport=new char[strlen("brak")];//zawsze dajemy o 1 wiecej niz dlugosc slowa
    strcpy(sport, "brak");
    waga=0.0;
    ile++;
}

Sportowiec::~Sportowiec()
{
    ile--;
    delete [] nazwisko;
    delete [] sport;
}

ostream & operator<<(ostream& os, const Sportowiec& S)
{
    os << "Nazwsiko: " << S.nazwisko << " " << "Sport: " << S.sport << " " << "Waga: " << S.waga << endl;
    return os;
}

Sportowiec::Sportowiec(const char* nazwisko, const char* sport, double waga)
{
    this->nazwisko=new char[strlen(nazwisko)+1];
    strcpy(this->nazwisko, nazwisko);
    this->sport=new char[strlen(sport)];
    strcpy(this->sport, sport);
    this->waga=waga;
    ile++;
}

Sportowiec::Sportowiec(const Sportowiec & s)
{
    this->nazwisko=new char[strlen(s.nazwisko)+1];
    strcpy(this->nazwisko, s.nazwisko);
    this->sport=new char[strlen(s.sport)];
    strcpy(this->sport, s.sport);
    this->waga=s.waga;
    ile++;
}

Sportowiec& Sportowiec::operator=(const  Sportowiec& s)
{
    if(this == &s)
    {
        return *this;
    }
    delete [] this->nazwisko;
    delete [] this->sport;
    this->nazwisko=new char[strlen(s.nazwisko)+1];
    strcpy(this->nazwisko, s.nazwisko);
    this->sport=new char[strlen(s.sport)];
    strcpy(this->sport, s.sport);
    this->waga=s.waga;

    return *this;
}
