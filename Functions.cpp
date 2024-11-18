#include "Overcoat.h"

bool operator==(const Overcoat& over1, const Overcoat& over2)
{
	// ��������� ����� ��������
	if (strcmp(over1.type, over2.type) == 0)
	{
		return 1;
	}
	return 0;
}

bool operator>(const Overcoat& over1, const Overcoat& over2)
{
	// �������� �� �������� �����
	if (over1 == over2)
	{
		if (over1.price > over2.price)
		{
			return true;
		}
	}
	return false;
}

bool operator<(const Overcoat& over1, const Overcoat& over2)
{
	// �������� �� �������� �����
	if (over1 == over2)
	{
		if (over1.price < over2.price)
		{
			return true;
		}
	}
	return false;
}