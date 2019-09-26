#include <iostream>
#include "punkt.h"

using namespace std;

Punkt::Punkt(){
    x = 0;
    y = 0;}

Punkt::Punkt(int xx, int yy){
    this->x = xx;
    this->y = yy;}

void Punkt::wyswietl(){
    cout<<"Punkt wspolrzedne: ( "<<x<<" , "<<y<<" )"<<endl;}

int Punkt::getX(){  return x;   }

int Punkt::getY(){  return y;   }

