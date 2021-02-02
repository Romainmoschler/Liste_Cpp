#pragma once
#include "A.h"
#include "B.h"

class C : public B, public A
{
	int n;
	int p;
public:
	C(int=1, int=2, int=3, float=0.0);
};

