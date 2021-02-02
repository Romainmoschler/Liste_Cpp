#pragma once
#include "liste.h"
#include "point.h"

class liste_points : liste , point
{
public:
	void affiche();

	void ajoute(point pt);
};

