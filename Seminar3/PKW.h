#pragma once
#include "Auto.h"

class PKW : public Auto
{
private:
	string sonderAus;

public:
	PKW(int id, string marke, string modell, string sonderAus) : Auto(id, marke, modell)
	{
		this->sonderAus = sonderAus;
	}

	~PKW();
};