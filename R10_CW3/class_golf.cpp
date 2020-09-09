#include "class_golf.h"

Golf::Golf()
{
	char temp[Len];
	std::cout << "Podaj name: ";
	std::cin >> temp;

	int i;
	for (i = 0; i < Len && *(temp + i); i++)
	{
		this->fullname[i] = temp[i];
	}
	this->fullname[i] = '\0';

	int hc;
	std::cout << "Podaj handicap: ";
	std::cin >> hc;
	this->handicap = hc;
}

Golf::Golf(const char* name, int hc)
{
	int i;
	for (i = 0; i < Len && *(name + i); i++)
	{
		this->fullname[i] = *(name + i);
	}
	this->fullname[i] = '\0';

	this->handicap = hc;
}

void Golf::Handicap(int hc)
{
	this->handicap = hc;
}

void Golf::Show() const
{
	std::cout << "Golf: " << std::endl;
	std::cout << this->fullname << std::endl;
	std::cout << this->handicap << std::endl;
}