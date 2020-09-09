#pragma once
#include <iostream>

class Move
{
private:
	double x;
	double y;

public:
	Move(double a = 0.0, double b = 0.0);
	void showme() const;
	Move add(const Move& m) const;
	void reset(double a = 0.0, double b = 0.0);
};