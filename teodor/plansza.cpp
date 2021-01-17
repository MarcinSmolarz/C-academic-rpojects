#include <iostream>
#include "plansza.h"
#include <cstring>

using namespace std;


Plansza::Plansza(int l)
{
    if(l==1)
    {
        this->wyglad=new char[2];
        strcpy(this->wyglad,'#');
        this->wartosc=l;
    }
    else
    {
        if(l==2)
        {
            this->wyglad=new char[2];
            strcpy(this->wyglad,'X');
            this->wartosc=l;
        }
        else
        {
            this->wyglad=new char[2];
            strcpy(this->wyglad,'@');
            this->wartosc=l;
        }
    }
}
Plansza::~Plansza()
{
    delete [] wyglad;
}
Plansza::rysuj()
{

}
