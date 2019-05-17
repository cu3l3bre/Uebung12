
#include <iostream>
#include "wald.h"
#include "baum.h"

using namespace std;

// Standard Konstruktor
Wald::Wald()
{
}

// Destruktor
Wald::~Wald(){}


// Methode, um einen Wald zu generieren
void Wald::generiereWald()
{
	int anzahlBaeume;

	cout << "Wie viele Baeume sollen generiert werden?: ";
	cin >> anzahlBaeume;

	for (int i = 0; i < anzahlBaeume; i++)
	{
	
		Baum neuerBaum;
		baumListe.push_back(neuerBaum.zufaellig());
	}

	cout << "Anzahl der Baeume im Wald " << baumListe.size() << endl;

}


// Methode, um alle Bäume aus der Liste in die Konsole zu printen
void Wald::zeigeWerteBaeume()
{
	for (int i = 0; i < baumListe.size(); i++)
	{
		cout << i + 1 << ". Baum:\t";
		baumListe[i].zeigeBaumdaten();
	}
}


//Methode, um alle Bäume wachsen zu lassen
void Wald::alleBaeumeWachsen()
{
	for (int i = 0; i < baumListe.size(); i++)
	{
		baumListe[i].wachsen();
	}
}

//Methode, um alle Bäume n Jahre wachsen zu lassen
void Wald::nJahreWachsen()
{
	int anzahlJahre = 0;
	cout << "Wieviel Jahre sollen simuliert werden?: ";
	cin >> anzahlJahre;

	for (int i = 0; i < anzahlJahre; i++)
	{
		alleBaeumeWachsen();
	}
}


//Methode, um den aeltesten Baum zu finden
Baum Wald::findeAeltestenBaum()
{
	Baum aeltesterBaum;

	return aeltesterBaum;


}


//Methode, um den hoechsten Baum zu finden
Baum Wald::findeHoehstenBaum()
{
	Baum hoechsterBaum;

	return hoechsterBaum;
}