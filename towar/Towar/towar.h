#ifndef TOWAR_H_INCLUDED
#define TOWAR_H_INCLUDED

struct Towar
{
private:
    int kod;
    float ilosc;
public:
    Towar(int _kod=0, float _ilosc=1)
    {
        kod=_kod;
        ilosc=_ilosc;
    }
    int dajkod()const;
    float dajilosc()const;
    void zmienilosc(float _ilosc);
    bool operator < (Towar t)const;
};
struct spis
{
    private:
        struct wezel
        {
            Towar dane; wezel * nastepny;
            wezel(Towar _dane, wezel * _nastepny)
            {
                dane=_dane;
                nastepny=_nastepny;
            }
        };
        wezel * poczatek;
    public:
        spis();             //zaimplementowac podstawowe funkcje tu i na gorze
     //   ~spis();
        void wypisz()const;
        void wstaw(Towar _dane);
        void kompresuj();
};

#endif // TOWAR_H_INCLUDED
