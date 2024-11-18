#pragma once
#include <iostream>

using namespace std;

class Overcoat
{
private:
	char* type;
	int price;
public:
	Overcoat() : Overcoat(nullptr, 0) {};
	Overcoat(const char* type_S, int price_S);

	// аксессоры
	const char* get_type() const
	{
		return  type;
	}
	int get_price() const
	{
		return price;
	}

	// модификаторы
	void set_type(const char* type_S);
	void set_price(const int price_S)
	{
		price = price_S;
	}

	Overcoat& operator=(const Overcoat& overcoat);

	friend bool operator==(const Overcoat& over1, const Overcoat& over2);
	friend bool operator>(const Overcoat& over1, const Overcoat& over2);
	friend bool operator<(const Overcoat& over1, const Overcoat& over2);
};