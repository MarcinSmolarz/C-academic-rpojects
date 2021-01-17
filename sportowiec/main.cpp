#include <iostream>
#include "sportowiec.h"

using namespace std;

int main()
{
    Sportowiec s1, s2, s3;
    Sportowiec s4("Ul", "zapasnik", 68);
    cout << "Liczba sportowcow: " << Sportowiec::getIle() << endl;
    {
        Sportowiec s;
        cout << "Liczba sportowcow: " << Sportowiec::getIle() << endl;
    }
    cout << "Liczba sportowcow: " << Sportowiec::getIle() << endl;
    cout << s1 << endl;
    {
        Sportowiec s5(s4); //kopiowanie s4 do s5, wywolanie jawne
        //Sportowiec s5=s3; wywolanie niejawne
        cout << s5 << endl;
        cout << "Liczba sportowcow: " << Sportowiec::getIle() << endl;
    }
    cout << s4 << endl;
    {
        Sportowiec s6;
        s6=s4;
        cout << s6 << endl;
        cout << "Liczba sportowcow: " << Sportowiec::getIle() << endl;
    }





    return 0;
}
