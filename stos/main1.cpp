#include <cstdlib>
#include <iostream>
#include "stos.h"
#include <stdexcept>
using namespace std;

int main()
{
    stack s (10); // stack - Struktura zdefiniowana w "stos.h" i zadeklarowana w "stos.cpp". 
                 // s - Mo¿esz nazwaæ to "stosik", "a", "tworcza_nazwa". To tylko nazwa zmiennej, która przyjê³a budowê z struktury stack.
                // Czyli po prostu je¿eli nazywasz zmienn¹ "int a" to "a" jest liczb¹. a "stack s" jest zmienn¹ która posiada w sobie zmienne: 
               // "capacity - pojemnoœæ, size - zawartoœæ, store - wskaŸnik"
    
    try   // To jest SUPER!!!!! Nie ka¿emy wywo³ywaæ funkcji programowi, tylko sprawdziæ czy sytuacja, w której program siê znalaz³, nie jest
         // przypadkiem sytuacj¹ wyj¹tkow¹ i czy akcja nie powinna zostaæ przerwana.
        // Budowa bardzo prosta: try{ Piszemy co ma spróbowaæ zrobiæ } catch(exception &e){ Piszemy co ma zrobiæ je¿eli mu siê nie uda } FAJNE!! xD
    {
    for (int i=0;i<10;i++)
        s.push(i);          // Wpisywanie elementów do stosu (stos.cpp)
                           // Budowa s.push(i): s - Tak nazywa siê zmienna, .- Kropka bo tak!, push - nazwa funkcji, ()- w nawiasach podajemy zmienne, które
                          // chcielibyœmy aby dzia³a³y w funkcji. Tutaj "i" zadzia³a jako "value" (**).  
    }
    catch(exception &e)
    {
          cout<<e.what(); // e.what(); oznacza ¿e wypiszemy tekst, który napisaliœmy w "stos.cpp" czyli "Full\n" (TAM JEST *)
    }
    
    s.print(); // Wypisujemy elementy nasz¹ funkcj¹ print
    
    
    if(s.isEmpty()) cout<<"True\n"; // Je¿eli funkcja s.isEmpty odda True wypiszemy True
    else cout<<"False\n";          // Odda False wypiszemy False
    
    s.clear(); // Funkcja "wyczyœci³a" stos, nie interesuj¹ nas ju¿ ¿adne poprzednie elementy
    
    cout<<s.getSize()<<endl; // Funkcja wypisuje iloœæ elementów na stosie, czyli 0
    
    /* DO ODKOMENTOWANIA
       int i,date;
       for (i=0;i<3;i++)
       {
           cout<<"Podaj element do stosu: ";
           cin>>date;
           s.push(date);
       }
       
       s.print();
    W ten sposób po wyczyszczeniu stosu, wpiszemy 3 nowe elementy z klawiatury nie zmieniaj¹c zasady dzia³ania funkcji.
    Elementy wchodz¹ na zasadzie LIFO - Last In First Out (Ostatni wszed³, pierwszy wyjdzie)*/
    system("PAUSE");
    return 0;
}
