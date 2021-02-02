#include "C.h"
#include "A.h"
#include "B.h"
#include <iostream>
using namespace std;

C::C(int n1, int n2, int n3, float v):B(v)
{
	n = n3;
	p = n1 + n2;

	cout << "** Construction objet C : " << n  << " " << p << endl;
}
