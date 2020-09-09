#include "golf.h"

void setgolf(golf& g, const char* name, int hc)
{
	int i;
	for (i = 0; i < Len && *(name + i); i++)
	{
		g.fullname[i] = *(name + i);
	}
	g.fullname[i] = '\0';

	g.handicap = hc;
}

void setgolf(golf& g)
{
	char temp[Len];
	std::cout << "Podaj name: ";
	std::cin >> temp;

	int i;
	for (i = 0; i < Len && *(temp + i); i++)
	{
		g.fullname[i] = temp[i];
	}
	g.fullname[i] = '\0';

	int hc;
	std::cout << "Podaj handicap: ";
	std::cin >> hc;
	g.handicap = hc;
}

void handicap(golf& g, int hc)
{
	g.handicap = hc;
}

void showgolf(const golf& g)
{
	std::cout << "Golf: " << std::endl;
	std::cout << g.fullname << std::endl;
	std::cout << g.handicap << std::endl;
}
