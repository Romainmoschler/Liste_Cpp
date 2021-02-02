#include "liste.h"

liste::liste()
{
	this->debut = nullptr;
	cursor = 0;
}

liste::~liste()
{
	delete (debut);
}

void liste::ajoute(void* newCont)
{
	element* elem = new element;
	elem->suivant = this->debut;
	elem->contenu = newCont;

	this->debut = elem;
}

void* liste::premier()
{
	this->cursor = 0;
	return this->debut->contenu;
}

void* liste::prochain()
{
	int i = 0;
	cursor++;
	element* elem = this->debut;
	while (i < cursor)
	{
		if (elem->suivant == nullptr)
			return elem->contenu;
		elem = elem->suivant;
		i++;
	}
	return elem->contenu;
}

int liste::fini()
{
	int i = 0;
	element* elem = this->debut;
	while (elem->suivant != nullptr)
	{
		elem = elem->suivant;
		i++;
	}
	return (cursor == i);
}