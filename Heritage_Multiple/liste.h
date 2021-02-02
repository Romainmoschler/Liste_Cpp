#pragma once
#include "element.h"

class liste
{
protected:
	element* debut;
	int cursor;

public:
	liste();
	~liste();

	void ajoute(void*);
	void* premier();
	void* prochain();
	int fini();
};
