#pragma once
#include <iostream>

class Golf
{
private:
	static const int Len = 40;
	char fullname[Len];
	int handicap;

public:
	Golf();
	Golf(const char* name, int hc);
	void Handicap(int hc);
	void Show() const;
};