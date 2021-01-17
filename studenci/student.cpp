#include "student.h"


bool Student::czySkreslony(float srednia)
{
    if(srednia <= 2)
    {
        return 1;
    }
    return 0;
};

void Student::wypisz()const
{
    cout << "Imie i nazwisko: " << imie << " " << nazwisko << endl;
};

void Student::wstaw(string i, string n, int in, float s)
{
    imie=i;
    nazwisko=n;
    indeks=in;
    srednia=s;
};
