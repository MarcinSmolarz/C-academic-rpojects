#ifndef PRODUKT_H_
#define PRODUKT_H_
#include <iostream>

using namespace std;

class Produkt
{
private:
    int kod;
    string nazwa;
    float cena;
public:
   // Produkt();
    Produkt(int =0, string="brak", float= 0.0); // uzupelni wartosci jezeli uzytkownik ich nie poda
    // int = 0 mozan uzyc tylko wtedy gdy zrezygnujemy z konstruktora zeroargumntowego inaczej nie bedzie wiedzial o ktory chodzi
    ~Produkt();
    void wypisz()const;
    void wstaw(int, string, float);
};
#endif // PRODUKT_H_
