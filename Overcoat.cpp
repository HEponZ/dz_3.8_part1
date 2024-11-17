#include "Overcoat.h"

Overcoat& Overcoat::operator=(const Overcoat& overcoat)
{
	if (this == &overcoat)
	{
		return *this;
	}

	this->set_type(overcoat.get_type());
	this->set_price(overcoat.get_price());

	return *this;
}

Overcoat::Overcoat(char* type_S, int price_S) : type{}, price{ price_S }
{
	if (type_S)
	{
		type = new char[strlen(type_S) + 1];
		strcpy_s(type, strlen(type_S) + 1, type_S);
	}
}