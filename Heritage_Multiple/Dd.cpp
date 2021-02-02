#include "Dd.h"
#include "Bb.h"
#include "Cc.h"
#include <iostream>
using namespace std;

Dd::Dd(int n1, int n2, float x): Bb(x), Cc(n1), Aa(2*n1+1)
{
	nd = n2;
	cout << "$$ Construction de l'objet Dd :  " << nd << endl;
	cout << "$$ Construction de l'objet Dd :  " << nd << endl;
}
