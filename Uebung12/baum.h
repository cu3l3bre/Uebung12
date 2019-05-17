#pragma once



using namespace std;



class Baum
{
private:

	int alter;
	float hoehe;


public:

	Baum();
	Baum(int, float);


	// Getter
	int getAlter() { return alter; }
	float getHoehe() { return hoehe; }
	
	// Setter
	void setAlter(int neuAlter) { alter = neuAlter; }
	void setHoehe(float neuHoehe) { hoehe = neuHoehe; }


	// andere Methoden 
	void zeigeBaumdaten();
	Baum zufaellig();
	void wachsen();

	~Baum();
};

