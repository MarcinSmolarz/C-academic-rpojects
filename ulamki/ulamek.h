#ifndef ULAMEK_H_
#define ULAMEK_H_
#include <iostream>

using namespace std;

class Ulamek
{
private:
    int l;
    int m;
public:
    Ulamek(int l=0, int m=1);
    ~Ulamek() {};
    friend ostream & operator<<(ostream&, const Ulamek&);
    friend istream & operator>>(istream&, Ulamek&);
    //za[rzyjaznienie funkcji ostream i ulamka
    Ulamek operator+(const Ulamek&) const;
    //const w nawiasie zapobiega zmianie drugiego ulamka
    //const na koncu zapobiega zmianie ulamka pierwszego(wywolujacego)
    Ulamek operator-(const Ulamek&) const;
    Ulamek operator*(const Ulamek&) const;
    Ulamek operator/(const Ulamek&) const;
    Ulamek operator*(int) const;
    friend Ulamek operator*(int, const Ulamek&);
    //nie mozna przeciazac typow wbudowanych
    Ulamek operator-() const;
    bool operator==(const Ulamek&) const;
};






#endif // ULAMEK_H_
