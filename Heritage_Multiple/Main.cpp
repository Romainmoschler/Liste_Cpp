/*#include "A.h"
#include "B.h"
#include "C.h"*/
#include <iostream>
/*
#include "Aa.h"
#include "Bb.h"
#include "Cc.h"
#include "Dd.h"*/
#include "liste_points.h"
#include "point.h"

using namespace std;

int main()
{
/*	cout << "Exercice 109/Exercice 110/Exercice 111" << endl;

	C c1;
	cout << endl << endl;
	C c2(10, 11, 12, 5.0);


	cout << endl << endl << "Exercice 112/Exercice 113" << endl;

	Dd d(10, 20, 5.0);

	cout << endl << endl << "Exercice 114" << endl;*/

	liste_points liste;

	point p1(5, 10);
	point p2(7, 2);
	point p3;


	liste.affiche();

	liste.ajoute(p1);
	liste.ajoute(p2);
	liste.ajoute(p3);
	liste.affiche();


	return 0;
}