#include <iostream>
#include "namespace.h"

using namespace SALES;

int main()
{
	Sales ob1, ob2;

	double dtab[4] = { 1.0, 2.0, 3.0, 4.0 };

	setSales(ob1, dtab, 4);
	setSales(ob2);

	showSales(ob1);
	showSales(ob2);
}
