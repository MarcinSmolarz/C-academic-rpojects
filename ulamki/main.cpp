#include <iostream>
#include "ulamek.h"

using namespace std;

int main()
{
    Ulamek u1(1,2);
    Ulamek u2(-3,4);
    Ulamek u3(2,4);
    cout << u1 << "+" << u2 << "=" << u1 + u2 << endl;
    cout << u1 << "-" << u2 << "=" << u1 - u2 << endl;
    cout << u1 << "*" << u2 << "=" << u1 * u2 << endl;
    cout << u1 << "/" << u2 << "=" << u1 / u2 << endl;
    cout << u1 << "*" << '3' << "=" << u1 * 3 << endl;
    cout << 5 << "*" << u1 << "=" << 5 * u1 << endl;
    cout << "Czy " << u1 << " = " << u3 << " " << (u1==u2) << endl;
    //przeciazenie operatora. operator pochodzi z biblioteki iostream
    //a obiekt u1 pochodzi z klasy Ulamek.
    //cin >> u1;
    //cout << u1 << endl;


    return 0;
}

//budowa operatora + u1.operator+(u2)
