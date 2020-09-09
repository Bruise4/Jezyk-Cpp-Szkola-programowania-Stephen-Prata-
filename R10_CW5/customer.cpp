#include "customer.h"

Stack::Stack()
{
	top = 0;
}
bool Stack::isempty() const
{
	return top == 0;
}

bool Stack::isfull() const
{
	return top == MAX;
}

bool Stack::push(const customer& cu)
{
	if (top < MAX)
	{
		customers[top++] = cu;
		return true;
	}
	return false;
}

bool Stack::pop(customer& cu)
{
	if (top > 0)
	{
		cu = customers[--top];
		return true;
	}
	return false;
}
