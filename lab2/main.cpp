#include <iostream>
#include "produkt.h"

using namespace std;

int main()
{
    Produkt p1; // niejawnie wywolany konstruktor
//  Produkt p1 = Produkt(); jawnie wywolany konstruktor zeroargumentowy
    Produkt p2(2, "chleb", 4.5);
    Produkt p3(3, "dzem");
    Produkt p4(4);
    p1.wypisz();
    p1.wstaw(1234, "Wiadro", 20.90);
    p1.wypisz();
    p2.wypisz();
    p3.wypisz();
    p4.wypisz();
    return 0;
}




// ctrl + shift + c zakomntuj wszystko
// ctrl + shift + x odkomentuj wszystko
// shift + f2 zwin/rozwin panel z lewej
// f2 zwin/rozwin logi
// rozbij projekt na wiecej okien przez przeciagniecie karty do lewej az pojawi sie niebieski
// ctrl + +/- powieksz/zmniejsz rozmiar czcionki
// f9 kompiluj i uruchom
