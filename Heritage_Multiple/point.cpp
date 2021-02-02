#include "point.h"
#include <iostream>

using namespace std;

point::point(int abs, int ord)
{
	x = abs;
	y = ord;
}

void point::affiche()
{
	cout << "Coordonees : " << x << " " << y << endl;
}
