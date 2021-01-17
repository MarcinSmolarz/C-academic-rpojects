#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include "NIP.h"

using namespace std;

int sprawdz_urzad(string nip);
bool sprwdz_nip(string nip);

int main()
{
    NIP n1, n2, n3;
    string nip, dane, imie, nazwisko;
    ifstream wejscie("nipy.txt");
    while(!wejscie.eof())
    {
        cout << "Kontrolka" << endl;
        try
        {
            wejscie >> nip;
            for(int i=0; i<10; i++)
            {
                if(isdigit(nip[i])!=1)
                {
                    string wyjatek, zdejmij_linie;
                    wyjatek+="Bledny nip - ";
                    getline(wejscie, zdejmij_linie);
                    wyjatek+=nip+" "+zdejmij_linie;
                    throw wyjatek;
                }
            }
            //////////////////////////////

            bool poprawny_nip;
            poprawny_nip=sprwdz_nip(nip);
            if(!poprawny_nip)
            {
                string wyjatek, zdejmij_linie;
                wyjatek+="Bledny nip - ";
                getline(wejscie, zdejmij_linie);
                wyjatek+=nip+" "+zdejmij_linie;
                throw wyjatek;
            }
            //////////////////////////////
            string pomocniczy;
            for(int i=0; i<3; i++)
            {
                pomocniczy+=nip[i];
            }
            if(pomocniczy != "771" && pomocniczy != "772" && pomocniczy != "773")
            {
                string zdejmij_linie, wyjatek;
                wyjatek=wyjatek+"Bledny urzad - ";
                getline(wejscie, zdejmij_linie);
                wyjatek=wyjatek+nip+" "+zdejmij_linie;
                throw wyjatek;
            }


            /////////////////////////////////
            wejscie >> dane;
            dane+=" ";
            string dane2;
            wejscie >> dane2;
            dane+=dane2;
            for(int i=0; i<dane.length(); i++)
            {
                if(isdigit(dane[i])==1)
                {
                    string wyjatek, zdejmij_linie;
                    wyjatek+="Bledne dane - "+nip+" "+dane;
                    throw wyjatek;
                }
            }
            cout << "Dane : " << dane << " nip: " << nip << endl;


            int urzad;
            urzad=sprawdz_urzad(nip);
            if(urzad==771)
            {
                n1.wstaw(nip, dane);
            }
            else if(urzad==772)
            {
                n2.wstaw(nip, dane);
            }
            else if(urzad==773)
            {
                n3.wstaw(nip, dane);
            }

        }
        catch(string z)
        {
            cout << z << endl;
        }

    }
    wejscie.close();
    cout << endl;
    cout << "Piotrkow: " << endl;
    n1.wypisz();
    n1.wstaw_do_pliku("Piotrkow");
    cout << endl << "Radomsko: " << endl;
    n2.wypisz();
    n2.wstaw_do_pliku("Radomsko");
    cout << endl << "Tomaszow: " << endl;
    n3.wypisz();
    n3.wstaw_do_pliku("Tomaszow");
    cout << endl;
    n1.~NIP();
    n2.~NIP();
    n3.~NIP();
    return 0;
}

int sprawdz_urzad(string nip)
{
    //funnkcja zwracajaca nr urzedu
    //771 piotrkow
    //772 radomsko
    //773 tomaszow
    string pomocniczy;
    for(int i=0; i<3; i++)
    {
        pomocniczy+=nip[i];
    }
    if(pomocniczy=="771")
    {
        return 771;
    }
    else if(pomocniczy=="772")
    {
        return 772;
    }
    else if(pomocniczy=="773")
    {
        return 773;
    }
    else
    {
        return 0;
    }

}
bool sprwdz_nip(string nip)
{
//    cout << "\tNIP: " << nip << endl;
    int tab[10];
    ////////////////////////////////////////////
    for(int i=0; i<10; i++)
    {
        string tmp;
        tmp=nip[i];
        tab[i]=strtol(tmp.c_str(), NULL, 10); // 6 5 7 2 3 4 5 6 7
 //       cout << tab[i] << " ";
    }
//    cout << endl;
    ///////////////////////////////////////////
    int suma;
    suma=tab[0]*6+tab[1]*5+tab[2]*7+tab[3]*2+tab[4]*3+tab[5]*4+tab[6]*5+tab[7]*6+tab[8]*7;
//    cout << "\tDzielenie: " << suma%11 << endl;
//    cout << "\tI jeszcze ostatni znak: " << tab[9] << endl;
    if(suma%11==tab[9]) return true;
    else return false;
}
