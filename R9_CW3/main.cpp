# define _CRT_SECURE_NO_WARNINGS

#include <iostream>

struct chaff
{
	char dross[20];
	int slag;
};

void chaff_przypisz(chaff* ch);
void chaff_pokaz(const chaff* ch);

const int sizee = 2;
char buffer1[50];
char buffer2[500];

int main()
{
	chaff* p1 = new (buffer1) chaff[sizee];

	chaff_przypisz(p1);
	chaff_pokaz(p1);

	//delete[] p1; //nie trzeba
	return 0;
}

void chaff_przypisz(chaff* ch)
{
	for (size_t i = 0; i < sizee; i++)
	{
		strcpy((ch + i)->dross, "Jeden");
		(ch + i)->slag = 16;
	}
}

void chaff_pokaz(const chaff* ch)
{
	using namespace std;

	for (size_t i = 0; i < sizee; i++)
	{
		cout << (ch + i)->dross << endl;
		cout << (ch + i)->slag << endl;
		cout << endl;
	}
}
