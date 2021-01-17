#include <cstdlib>
#include <iostream>
#include "stos.h"
#include <stdexcept>
using namespace std;

int main()
{
    stack s (10); // stack - Struktura zdefiniowana w "stos.h" i zadeklarowana w "stos.cpp". 
                 // s - Mo�esz nazwa� to "stosik", "a", "tworcza_nazwa". To tylko nazwa zmiennej, kt�ra przyj�a budow� z struktury stack.
                // Czyli po prostu je�eli nazywasz zmienn� "int a" to "a" jest liczb�. a "stack s" jest zmienn� kt�ra posiada w sobie zmienne: 
               // "capacity - pojemno��, size - zawarto��, store - wska�nik"
    
    try   // To jest SUPER!!!!! Nie ka�emy wywo�ywa� funkcji programowi, tylko sprawdzi� czy sytuacja, w kt�rej program si� znalaz�, nie jest
         // przypadkiem sytuacj� wyj�tkow� i czy akcja nie powinna zosta� przerwana.
        // Budowa bardzo prosta: try{ Piszemy co ma spr�bowa� zrobi� } catch(exception &e){ Piszemy co ma zrobi� je�eli mu si� nie uda } FAJNE!! xD
    {
    for (int i=0;i<10;i++)
        s.push(i);          // Wpisywanie element�w do stosu (stos.cpp)
                           // Budowa s.push(i): s - Tak nazywa si� zmienna, .- Kropka bo tak!, push - nazwa funkcji, ()- w nawiasach podajemy zmienne, kt�re
                          // chcieliby�my aby dzia�a�y w funkcji. Tutaj "i" zadzia�a jako "value" (**).  
    }
    catch(exception &e)
    {
          cout<<e.what(); // e.what(); oznacza �e wypiszemy tekst, kt�ry napisali�my w "stos.cpp" czyli "Full\n" (TAM JEST *)
    }
    
    s.print(); // Wypisujemy elementy nasz� funkcj� print
    
    
    if(s.isEmpty()) cout<<"True\n"; // Je�eli funkcja s.isEmpty odda True wypiszemy True
    else cout<<"False\n";          // Odda False wypiszemy False
    
    s.clear(); // Funkcja "wyczy�ci�a" stos, nie interesuj� nas ju� �adne poprzednie elementy
    
    cout<<s.getSize()<<endl; // Funkcja wypisuje ilo�� element�w na stosie, czyli 0
    
    /* DO ODKOMENTOWANIA
       int i,date;
       for (i=0;i<3;i++)
       {
           cout<<"Podaj element do stosu: ";
           cin>>date;
           s.push(date);
       }
       
       s.print();
    W ten spos�b po wyczyszczeniu stosu, wpiszemy 3 nowe elementy z klawiatury nie zmieniaj�c zasady dzia�ania funkcji.
    Elementy wchodz� na zasadzie LIFO - Last In First Out (Ostatni wszed�, pierwszy wyjdzie)*/
    system("PAUSE");
    return 0;
}
