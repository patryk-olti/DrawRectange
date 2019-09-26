#include <iostream>
#include "prostokat.h"

using namespace std;

Prostokat::Prostokat(){
    boka = 1;
    bokb = 1;}

Prostokat::Prostokat(int A, int B){
    boka = A;
    bokb = B;}

Prostokat::Prostokat(int A, int B, int xx, int yy){
    this->boka = A;
    this->bokb = B;
    this->x = xx;
    this->y = yy;}

void Prostokat::wyswietl(){
    cout<<"Prostokat o wspolrzednych: ( "<<x<<" , "<<y<<" ) posiada pierwszy bok rowny: "<<boka<<" i drugi "<<bokb<<endl;
}

void Prostokat::wczytaj()
{
    int A, B, xx, yy;
    cout<<"Podaj bok a: ";
    cin>>A;
    cout<<"Podaj bok b: ";
    cin>>B;
    cout<<"Podaj punkt x: ";
    cin>>xx;
    cout<<"Podaj punkt y: ";
    cin>>yy;

    this->boka = A;
    this->bokb = B;
    this->x = xx;
    this->y = yy;
}

int Prostokat::pole()
{
    return boka*bokb;
}
