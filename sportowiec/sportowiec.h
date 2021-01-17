#ifndef SPORTOWIEC_H
#define SPORTOWIEC_H_
#include <iostream>

using namespace std;

class Sportowiec
{
private:
    static int ile; //wartosc statyczna
    char * nazwisko;
    char * sport;
    double waga;
public:
    static int getIle(); //metoda statyczna, moze
    Sportowiec();
    Sportowiec(const char*, const char*, double);
    Sportowiec(const Sportowiec&); // konstruktor kopiujacy
    //kopiuje do podanego elementu inny
    ~Sportowiec();
    friend ostream & operator << (ostream&, const Sportowiec&);
    Sportowiec& operator=(const Sportowiec&);


};
#endif // SPORTOWIEC_H
