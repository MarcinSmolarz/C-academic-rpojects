#include <iostream>
#include "plansza.h"
#include <cstring>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int a=10,b=15;
    Plansza tab[a][b];
    int d=1,licznik=0;
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<a;j++)
        {
            c=(rand()%2)+d;
            if(c==3)
            {
                if(licznik!=0 && i!=0 && i!=(b-1) && j!=0 && j!=(a-1))
                    {
                        d=0;
                    }
                licznik++;
            }
            Plansza pixel(c);
        }
    }

    return 0;
}
