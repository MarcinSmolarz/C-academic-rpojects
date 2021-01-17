#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e, f, g, wynik;
    char x;
    bool powt=true;
    while(powt)
    {
        cout << "Podaj kolejne liczby: " << endl;
        cin >> a >> b >> c >> d >> e >> f >> g;
        wynik=a*7+b+c*3+d*9+e*7+f+g*3;
        cout << "liczba kontrolna to pierwsza od prawej: " << wynik << endl;
        cout << "Czy chcesz powtorzyc? (t/n)" << endl; cin >> x;
        if(x=='n')
        {
            powt=false;
        }
    }




    return 0;
}
