#include <iostream>

#ifndef punkt.h
#define punkt.h
#include "punkt.h"

using namespace std;

class Prostokat : public Punkt
{
private:
      int boka;
      int bokb;

public:
    Prostokat();
    Prostokat(int A, int B);
    Prostokat(int bok1, int bok2, int xx, int yy);
    void wyswietl();
    void wczytaj();
    int pole();
    friend void Rysuj_Mape(Prostokat &, int i);
};


#endif // punkt
