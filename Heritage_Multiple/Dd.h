#pragma once
#include "Bb.h"
#include "Cc.h"
class Dd :public Bb, public Cc
{
	int nd;
public:
	Dd(int, int, float);
};

