#include "Overcoat.h"

Overcoat& Overcoat::operator=(const Overcoat& overcoat)
{
	// проверка не равны ли уже обьекты
	if (this == &overcoat)
	{
		return *this;
	}

	// присваивание значений одного обьекта другому
	strcpy_s(type, strlen(overcoat.type) + 1, overcoat.type);
	price = overcoat.price;

	return *this;
}

Overcoat::Overcoat(const char* type_S, int price_S) : type{}, price{ price_S }
{
	if (type_S)
	{
		type = new char[strlen(type_S) + 1];
		strcpy_s(type, strlen(type_S) + 1, type_S);
	}
}

void Overcoat::set_type(const char* type_S)
{
	if (type)
	{
		delete[] type;
	}
	type = new char[strlen(type_S) + 1];
	strcpy_s(type, strlen(type_S) + 1, type_S);
}