#include "Cc.h"
#include "Aa.h"
#include <iostream>
using namespace std;

Cc::Cc(int nn) : Aa(2*nn+1)
{
	nc = nn;
	cout << "$$ Creation de l'objet Cc : " << nc << endl;
}
