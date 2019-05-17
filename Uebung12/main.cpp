#include <iostream>
#include "time.h"
#include "baum.h"
#include "wald.h"

using namespace std;


int main()
{
	cout << "Programm zu Uebung 12" << endl << endl;


	// Zufallsgenerator initialisieren
	srand(time(0));


	//Baum birke;
	//Baum birke(20, 40.0);

	//birke.zufaellig();

	//	cout << "Baumdaten zufaellig generiert" << endl;
	//birke.zeigeBaumdaten();



	//float zufallswert;
	//	
	//	
	//	
	//for (int i = 0; i < 100; i++)
	//{
	//	zufallswert = ((rand() % 100)/100.0);
	//	cout << zufallswert << endl;
	//}

	/*
	birke.wachsen();
	birke.zeigeBaumdaten();
	
	birke.wachsen();
	birke.zeigeBaumdaten();
	*/

	Wald wald1;


	wald1.generiereWald();

	wald1.zeigeWerteBaeume();
	wald1.nJahreWachsen();
	wald1.zeigeWerteBaeume();



	
	system("pause");
	return 0;
}