#include "LKW.h"
#include <string>

LKW::LKW(int id, string marke, string modell, double gesamtgewicht, string bezeichnung) : Auto{ id,marke,modell }
{
	this->gesamtgewicht = gesamtgewicht;
	this->bezeichnung = bezeichnung;
}

void LKW::load(double x)
{
	gesamtgewicht+=x;
}
void LKW::unload(double x)
{
	gesamtgewicht-=x;
}