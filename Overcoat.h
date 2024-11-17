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
	Overcoat(char* type_S, int price_S) : type{}, price{ price_S }
	{
		if (type_S)
		{
			type = new char[strlen(type_S) + 1];
			strcpy_s(type, strlen(type_S) + 1, type_S);
		}
	}

	const char* get_type() const
	{
		return  type;
	}
	int get_price() const
	{
		return price;
	}

	void set_type(const char* type_S)
	{
		if (type)
		{
			delete[] type;
		}
		type = new char[strlen(type_S) + 1];
		strcpy_s(type, strlen(type_S) + 1, type_S);
	}
	void set_price(const int price_S)
	{
		price = price_S;
	}

	Overcoat& operator=(const Overcoat& overcoat)
	{
		if (this == &overcoat)
		{
			return *this;
		}

		this->set_type(overcoat.get_type());
		this->set_price(overcoat.get_price());

		return *this;
	}

	friend bool operator==(const Overcoat& over1, const Overcoat& over2)
	{
		if (strcmp(over1.type, over2.type) == 0)
		{
			return 1;
		}
		return 0;
	}

	friend bool operator>(const Overcoat& over1, const Overcoat& over2)
	{
		if (over1 == over2)
		{
			if (over1.price > over2.price)
			{
				cout << "Цена первой одежды больше, чем цена второй\n";
				return 1;
			}
			else if(over2.price > over1.price)
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
};