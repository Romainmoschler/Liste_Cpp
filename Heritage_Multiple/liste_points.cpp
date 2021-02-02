#include "liste_points.h"
#include <iostream>
using namespace std;

void liste_points::affiche()
{
	element *elem = this->debut;
	int nb = cursor;
	while (elem != nullptr)
	{
		cout << nb << "-> "<< elem->contenu <<endl;
		elem = elem->suivant;
		nb--;
	}
	cout << "fin" << endl;
}

void liste_points::ajoute(point pt)
{
	element* elem = new element;
	elem->suivant = this->debut;
	elem->contenu = &pt;

	this->debut = elem;
}


