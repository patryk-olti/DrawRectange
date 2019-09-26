#include <iostream>
#include "przyjaciel.h"
#include "prostokat.h"
using namespace std;

void Rysuj_Mape( Prostokat & p, int offset)
{
    int rozmiar_x = 2*offset + p.boka + p.x;
    int rozmiar_y = 2*offset + p.bokb + p.y;
    char tab[rozmiar_x][rozmiar_y];

    char tlo = 196;
    for(int j = 0; j < rozmiar_y; j++){
        for(int i = 0; i < rozmiar_x; i++){
            tab[i][j] = tlo;
        }
    }

    char znak = 177;
    for(int j=0; j < rozmiar_y; j++){
        for(int i=0; i < rozmiar_x; i++){
            if(i==p.x+offset && j >= offset + p.y && j < rozmiar_y-offset){
                tab[i][j] = znak;   }

            if(i==rozmiar_x-offset-1 && j >= offset + p.y && j < rozmiar_y-offset){
                tab[i][j] = znak;   }

            if(j==p.y+offset && i >= offset + p.x && i < rozmiar_x - offset){
                tab[i][j] = znak;   }

            if(j==rozmiar_y-offset-1 && i >= offset + p.x && i < rozmiar_x - offset){
                tab[i][j] = znak;   }
        }
    }

    cout<<endl<<"####### FIGURA #######";
    for(int j=0; j<rozmiar_y; j++)    {
        cout<<endl;
        for(int i=0; i<rozmiar_x; i++)        {
            cout<<tab[i][j];
        }
    }
}
