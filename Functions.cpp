#include "Overcoat.h"

bool operator==(const Overcoat& over1, const Overcoat& over2)
{
	if (strcmp(over1.type, over2.type) == 0)
	{
		return 1;
	}
	return 0;
}

bool operator>(const Overcoat& over1, const Overcoat& over2)
{
	if (over1 == over2)
	{
		if (over1.price > over2.price)
		{
			cout << "Цена первой одежды больше, чем цена второй\n";
			return 1;
		}
		else if (over2.price > over1.price)
		{
			cout << "Цена второй одежды больше, чем цена первой\n";
			return 1;
		}
		else
		{
			cout << "Цены равны\n";
			return 1;
		}
	}
	cout << "Типы не равны\n";
	return 0;
}