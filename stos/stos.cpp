#include "stos.h"
#include <iostream>
#include <stdexcept>
#include <cstdlib>
using namespace std;

Stack::Stack()
{
      head=NULL; //To jest zmienna, kt�ra ma za zadanie wskazywa� na najnowszy element stosu
      size=0;
}

Stack::~Stack()
{
      while(head!=NULL)     //Dekonstruktor - Niszczymy wszystkie dane w stosie:
      {
            Node * killer=head;      // killer to zmienna, dzi�ki kt�rej poruszamy si� po stosie. I na dzie�dobry ka�emy mu przyj�� warto�� head, czyli najnowszy element,
            head=killer->next;     // ale head przecie� musi wskazywa� na najnowszy element, dlatego przed usuni�ciem, musimy ustawi� head na now� warto�� przechowywan�
                                  // w konstruktorze next. Bo jak wida� w stos.h zmienna next jest typu Node, czyli konstruktora.
            delete (killer);      // Usuwamy element, kt�ry ju� teraz jest poza stosem, bo najnowszym elementem sta� si� element z zmiennej next.
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

int Stack::pop () // pop wyrzuca najnowszy element, wi�c dzia�a troch� jak dekonstruktor, ale w mniejszej skali:
{
    Node* killer=head;  // killer ma to samo zadanie co wy�ej,
    if(killer==NULL) throw runtime_error("Stack is empty\n"); // nie wyrzucimy niczego z pustego stosu,
    int result=killer->value;   // Funkcja pop ma za zadanie nie tylko wyrzuci� najnowszy element, ale tak�e go zwr�ci� w programie.
                               //Dlatego do zmiennej result wsadzimy warto� tego elementu
    head=killer -> next;   // By�o w dekonstruktorze
    delete (killer);      // By�o...
    size--;     // Nic nowego, ale mo�e wydawa� si� dziwne, �e tutaj zmniejszamy wielko�� a w dekonstruktorze nie.
               // Ot� dzieje si� tak, poniewa� kolokwialnie rzecz ujmuj�c, w dekonstuktorze wali nas informacja o stosie. Chcemy si� go pozby� z pami�ci.
    return result;
}

void Stack::print () const // Piotrek wy��czy� mi komputer w tym miejscu i musia�em to sam napisa�, ale chyba o to chodzi�o:
{
     Node* read=head; //Stworzy�em co� co b�dzie chodzi�o po stosie (Mo�emy to nazwa� killer, to jest to samo)

     while(read!=NULL) // P�tla dop�ki read nie trafi na puste miejsce:
     {
        cout<<read->value<<" "; // Po kolei: wypisz<< zmienna read -> warto�� kt�r� przechowuje czyli value<<"spacja";
        read=read->next; // W zmiennej read zmieniamy jej warto�� z value na next. No bo value (najnowszy element) ju� wydrukowali�my, teraz chcemy nast�pny.
     }
}

int Stack::capacity () const
{
    return size;
}
