#include <iostream>
using namespace std;

class Punkt
{
protected:
    int x;
    int y;

public:
    Punkt();
    Punkt(int x1, int y1);
    int getX();
    int getY();
    void wyswietl();
};
