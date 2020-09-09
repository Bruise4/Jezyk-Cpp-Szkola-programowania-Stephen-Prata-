#include <iostream>
#include "class_golf.h"

int main()
{
	Golf jeden = Golf("Jeden", 16);
	jeden.Show();
	jeden.Handicap(15);
	jeden.Show();
}
