#include <iostream>

#include "prostokat.h"
#include "przyjaciel.h"

using namespace std;

int main()
{
    int offset = 0;

    Prostokat prosto2;
    prosto2.wczytaj();
    prosto2.wyswietl();
    cout<<"pole prostokata to: "<<prosto2.pole()<<endl;

    cout<<"Podaj offset : ";
    cin>>offset;
    Rysuj_Mape(prosto2, offset);

    cout<<endl;
    return 0;
}

// SMIECI
//_______________________________________________________________________________________________

    /*
    Punkt p1;
    p1.wyswietl();

    Punkt p2(15,-5);
    p2.wyswietl();
    cout<<endl;

    Prostokat prosto1(10,5,2,5);
    prosto1.wyswietl();
    cout<<"Pole prostokata to: "<<prosto1.pole()<<endl<<endl;

    */

