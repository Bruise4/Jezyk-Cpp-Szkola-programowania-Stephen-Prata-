#include "class_Sales.h"

SALES::Sales::Sales()
{
	using std::cout;
	using std::cin;
	using std::endl;

	cout << "Podaj tablice [4] : " << endl;
	double ar[4];

	for (size_t i = 0; i < 4; i++)
	{
		cout << "Podaj " << i + 1 << " element : ";
		cin >> ar[i];
	}

	int n = 4;
	this->min = ar[0];
	this->max = ar[0];
	this->sales[0] = ar[0];
	double suma = ar[0];

	for (size_t i = 1; i < n; i++)
	{
		this->sales[i] = ar[i];

		if (ar[i] < this->min)
			this->min = ar[i];

		if (ar[i] > this->max)
			this->max = ar[i];

		suma += ar[i];
	}

	this->average = suma / n;

}

SALES::Sales::Sales(const double ar[], int n)
{
	this->min = ar[0];
	this->max = ar[0];
	this->sales[0] = ar[0];
	double suma = ar[0];

	for (size_t i = 1; i < n; i++)
	{
		this->sales[i] = ar[i];

		if (ar[i] < this->min)
			this->min = ar[i];

		if (ar[i] > this->max)
			this->max = ar[i];

		suma += ar[i];
	}

	this->average = suma / n;
}

void SALES::Sales::Show() const
{
	using namespace std;

	cout << "Sales : ";
	for (size_t i = 0; i < 4; i++)
	{
		cout << this->sales[i] << " ";
	}
	cout << endl;

	cout << this->min << endl;
	cout << this->average << endl;
	cout << this->max << endl;
}