#include <iostream>

using namespace std;

class Student
{
private:
    string imie;
    string nazwisko;
    int indeks;
    float  srednia;
    bool czySkreslony(float srednia);

public:
    void wypisz()const;
    void wstaw(string, string,  int, float);
};
