#pragma once
#include <iostream>

class Plorg
{
private:
	char imie[19] = "Plorga";
	int wsp = 50;

public:
	//Plorg() { imie[0] = '\0', wsp = 50; };
	Plorg(const char* im = "Plorga", int ws = 50);
	void Wsp(int ws);
	void Show() const;
};
