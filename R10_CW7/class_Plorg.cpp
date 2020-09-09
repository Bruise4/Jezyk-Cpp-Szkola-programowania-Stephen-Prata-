#include "class_Plorg.h"

Plorg::Plorg(const char* im, int ws)
{
	memcpy(imie, im, strlen(im) + 1);
	wsp = ws;
}

void Plorg::Wsp(int ws)
{
	this->wsp = ws;
}

void Plorg::Show() const
{
	using std::cout;
	using std::endl;

	cout << "Imie : ";
	int length = strlen(imie);
	for (size_t i = 0; i < length; i++)
	{
		cout << imie[i];
	}
	cout << endl;

	cout << "Wsp : " << this->wsp << endl;
}