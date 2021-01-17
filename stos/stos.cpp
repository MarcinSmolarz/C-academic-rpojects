#include "stos.h"
#include <iostream>
#include <stdexcept>
#include <cstdlib>
using namespace std;

Stack::Stack()
{
      head=NULL; //To jest zmienna, która ma za zadanie wskazywaæ na najnowszy element stosu
      size=0;
}

Stack::~Stack()
{
      while(head!=NULL)     //Dekonstruktor - Niszczymy wszystkie dane w stosie:
      {
            Node * killer=head;      // killer to zmienna, dziêki której poruszamy siê po stosie. I na dzieñdobry ka¿emy mu przyj¹æ wartoœæ head, czyli najnowszy element,
            head=killer->next;     // ale head przecie¿ musi wskazywaæ na najnowszy element, dlatego przed usuniêciem, musimy ustawiæ head na now¹ wartoœæ przechowywan¹
                                  // w konstruktorze next. Bo jak widaæ w stos.h zmienna next jest typu Node, czyli konstruktora.
            delete (killer);      // Usuwamy element, który ju¿ teraz jest poza stosem, bo najnowszym elementem sta³ siê element z zmiennej next.
      }
}

void Stack::push (int _value)
{

      Node * nowy =new Node(_value, head);
      /*    rozpisanie tego co sie dzieje wyzej
      Node *nowy;
      nowy.value=_value;
      nowy->next=head;
      */

      head = nowy;
       // Nic nowego   NIEPRAWDA
      size++;
}

int Stack::pop () // pop wyrzuca najnowszy element, wiêc dzia³a trochê jak dekonstruktor, ale w mniejszej skali:
{
    Node* killer=head;  // killer ma to samo zadanie co wy¿ej,
    if(killer==NULL) throw runtime_error("Stack is empty\n"); // nie wyrzucimy niczego z pustego stosu,
    int result=killer->value;   // Funkcja pop ma za zadanie nie tylko wyrzuciæ najnowszy element, ale tak¿e go zwróciæ w programie.
                               //Dlatego do zmiennej result wsadzimy wartoœ tego elementu
    head=killer -> next;   // By³o w dekonstruktorze
    delete (killer);      // By³o...
    size--;     // Nic nowego, ale mo¿e wydawaæ siê dziwne, ¿e tutaj zmniejszamy wielkoœæ a w dekonstruktorze nie.
               // Otó¿ dzieje siê tak, poniewa¿ kolokwialnie rzecz ujmuj¹c, w dekonstuktorze wali nas informacja o stosie. Chcemy siê go pozbyæ z pamiêci.
    return result;
}

void Stack::print () const // Piotrek wy³¹czy³ mi komputer w tym miejscu i musia³em to sam napisaæ, ale chyba o to chodzi³o:
{
     Node* read=head; //Stworzy³em coœ co bêdzie chodzi³o po stosie (Mo¿emy to nazwaæ killer, to jest to samo)

     while(read!=NULL) // Pêtla dopóki read nie trafi na puste miejsce:
     {
        cout<<read->value<<" "; // Po kolei: wypisz<< zmienna read -> wartoœæ któr¹ przechowuje czyli value<<"spacja";
        read=read->next; // W zmiennej read zmieniamy jej wartoœæ z value na next. No bo value (najnowszy element) ju¿ wydrukowaliœmy, teraz chcemy nastêpny.
     }
}

int Stack::capacity () const
{
    return size;
}
