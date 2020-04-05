#pragma once
#include "Auto.h"
#include <string>

class LKW : public Auto
{
private:
	int gesamtgewicht;
	string bezeichnung;

public:
	LKW(int,string ,string ,double,string );

	void load(double x);
	void unload(double x);
};