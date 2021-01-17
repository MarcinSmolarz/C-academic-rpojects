#ifndef KONTO_H_
#define KONTO_H_
#include <iostream>

using namespace std;
class Konto
{
private:
    string imie, nazwisko, nr_konta;
    double saldo;
public:
    Konto(string = "brak danych", string ="brak dancyh", string = "brak danych", double = 0.0);
    ~Konto();
    void uzupelnij(string, string, string, double);
    void opis()const;
    void wplac(double);
    void wyplac(double);

};
#endif // KONTO_H_
