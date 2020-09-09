#include "class_Move.h"

Move::Move(double a, double b)
{
	x = a;
	y = b;
}

void Move::showme() const
{
	std::cout << "x = " << x << "\t y = " << y << std::endl;
}

Move Move::add(const Move& m) const
{
	return Move(m.x + this->x, m.y + this->y);
}

void Move::reset(double a, double b)
{
	this->x = a;
	this->y = b;
}