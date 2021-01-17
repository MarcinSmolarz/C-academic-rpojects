#include "ulamek.h"

Ulamek::Ulamek(int l, int m)
{
    this -> l = l;
    this -> m = m;
}

ostream & operator<<(ostream& os, const Ulamek& U)
{
    os << U.l << '/' << U.m;
    return os;
}
istream & operator>>(istream& is, Ulamek& U)
{
    cout << "licznik ="; is >> U.l;
    cout << "mianownik ="; is >> U.m;
    return is;
}

Ulamek Ulamek::operator+(const Ulamek& U) const
{
    Ulamek W;
    W.l = this->l * U.m + U.l * this->m;
    W.m = this->m * U.m;
    return W;
}

Ulamek Ulamek::operator-(const Ulamek& U) const //Ulamek Ulamek:: bo zwracamy typ Ulamek
{
    Ulamek W;
    W.l = this->l * U.m - U.l * this->m;
    W.m = this->m * U.m;
    return W;
}

Ulamek Ulamek::operator*(const Ulamek& U) const
{
    Ulamek W;
    W.l = this->l * U.l;
    W.m = this->m * U.m;
    return W;
}

Ulamek Ulamek::operator/(const Ulamek& U) const //Ulamek Ulamek:: bo zwracamy typ Ulamek
{
    Ulamek W;
    W.l = this->l * U.m;
    W.m = this->m * U.l;
    return W;
}

Ulamek Ulamek::operator*(int liczba) const //Ulamek Ulamek:: bo zwracamy typ Ulamek
{
    Ulamek W;
    W.l = this->l * liczba;
    W.m = this->m;
    return W;
}
Ulamek operator*(int liczba, const Ulamek& U)
{
    return U*liczba;
}
Ulamek Ulamek::operator-() const
{
//    Ulamek W;
//    W.l=-(this->l);
//    W.m=this->m;
//    return W;
//    rozwiazanie alternatywne
    return *this * (-1); // *this wyciaganie operatorem wartosci
}

bool Ulamek::operator==(const Ulamek&U) const
{
    int W;
    W=this->l * U.l;
    if(W*this->m==U.m)
    {
        return 1;
    }
//    if(this->l==U.l && this->m==U.m)
//    {
//        return 1;
//    }
    else return 0;
}
