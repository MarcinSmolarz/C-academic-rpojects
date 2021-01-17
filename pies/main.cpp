#include "pies.h"
#include <iostream>

using namespace std;

int main()
{
    Pies p1;
    Pies p2("Burek", 4);
    p2.opis();

    p1.ustaw("Kajtek", 2);
    p1.opis();
    p1.szczekaj();

    return 0;
}
