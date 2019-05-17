#pragma once

#include <vector>
#include "baum.h"

using namespace std;



class Wald
{
private:
	vector<Baum> baumListe;


public:

	Wald();
	~Wald();

	void generiereWald();
	void zeigeWerteBaeume();
	void alleBaeumeWachsen();
	void nJahreWachsen();
	Baum findeAeltestenBaum();
	Baum findeHoehstenBaum();
};