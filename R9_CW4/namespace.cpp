#include <iostream>
#include "namespace.h"

namespace SALES
{
	void setSales(Sales& s, const double ar[], int n)
	{
		s.min = ar[0];
		s.max = ar[0];
		s.sales[0] = ar[0];
		double suma = ar[0];

		for (size_t i = 1; i < n; i++)
		{
			s.sales[i] = ar[i];

			if (ar[i] < s.min)
				s.min = ar[i];

			if (ar[i] > s.max)
				s.max = ar[i];

			suma += ar[i];
		}

		s.average = suma / n;
	}

	void setSales(Sales& s)
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
		s.min = ar[0];
		s.max = ar[0];
		s.sales[0] = ar[0];
		double suma = ar[0];

		for (size_t i = 1; i < n; i++)
		{
			s.sales[i] = ar[i];

			if (ar[i] < s.min)
				s.min = ar[i];

			if (ar[i] > s.max)
				s.max = ar[i];

			suma += ar[i];
		}

		s.average = suma / n;

	}

	void showSales(const Sales& s)
	{
		using namespace std;

		cout << "Sales : ";
		for (size_t i = 0; i < 4; i++)
		{
			cout << s.sales[i] << " ";
		}
		cout << endl;

		cout << s.min << endl;
		cout << s.average << endl;
		cout << s.max << endl;
	}
}