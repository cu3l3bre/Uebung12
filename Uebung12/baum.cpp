

#include <iostream>
#include "baum.h"

// Standard Konstruktor
Baum::Baum()
{
	alter = 0;
	hoehe = 0.0;
}


// Allgemeiner Konstruktor
Baum::Baum(int neuAlter, float neuHoehe)
{
	alter = neuAlter;
	hoehe = neuHoehe;
}


// Destruktor
Baum::~Baum()
{

};


// Methode, um die Werte eines Baumes auf der Konsole zu zeigen
void Baum::zeigeBaumdaten()
{
	cout << "Alter: " << alter << "\t Hoehe: " << hoehe << endl;
}


// Methode, um den fuer das Setzen der Werte durch zufall
// wobei die größere von 2 Zahlen das Alter sein soll
Baum Baum::zufaellig()
{
	Baum neuerBaum;

	int zufallswert1 = (rand() % 100 + 1);
	int zufallswert2 = (rand() % 100 + 1);
	//cout << zufallswert1 << "   " << zufallswert2 << endl;

	if (zufallswert1 >= zufallswert2)
	{
		neuerBaum.alter = zufallswert1;
		neuerBaum.hoehe = zufallswert2;
	}
	else
	{
		neuerBaum.alter = zufallswert2;
		neuerBaum.hoehe = zufallswert1;
	}

	return neuerBaum;
}


// Methode, um das Alter um 1 zu erhoehe und den Baum
// zwischen 0 und 1 wachsen zu lassen
void Baum::wachsen()
{
	//cout << "Der Baum waechst und wird aelter" << endl;
	float zufallswert = ((rand() % 100) / 100.0);


	// Alter um 1 erhöhen
	alter++;

	// Baum zwischen 0.0 und 0.99  wachsen lassen
	hoehe += zufallswert;
}

