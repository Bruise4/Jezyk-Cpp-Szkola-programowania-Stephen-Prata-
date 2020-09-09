#pragma once
#include <iostream>

struct customer
{
	char fullname[35];
	double payment;
};

class Stack
{
private:
	enum {MAX = 10};
	customer customers[MAX];
	int top;
public:
	Stack();
	bool isempty() const;
	bool isfull() const;
	bool push(const customer& cu);
	bool pop(customer& cu);
};