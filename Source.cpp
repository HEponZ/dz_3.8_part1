#include "Overcoat.h"

int main()
{
	setlocale(LC_ALL, "rus");
	Overcoat over, over2;
	int choise, num;
	char buf[100];

	enum MENU {
		EXIT = 0,
		FILL,
		COMPARE,
		ASSIGN,
		COMPARE_PRICE,
		PRINT
	};

	cout << "1 - Ввести информацию о одежде\n2 - Сравнить типы одежды\n3 - Присвоить\n4 - Сравнить цены одного типа\n0 - EXIT\n";

	do
	{
		cin >> choise;
		switch (choise)
		{
		case FILL:
			cin.ignore();
			cout << "Введите тип одежды №1: ";
			gets_s(buf);
			over.set_type(buf);
			cout << "Введите цену одежды №1: ";
			cin >> num;
			over.set_price(num);

			cin.ignore();
			cout << "Введите тип одежды №2: ";
			gets_s(buf);
			over2.set_type(buf);
			cout << "Введите цену одежды №2: ";
			cin >> num;
			over2.set_price(num);
			break;
		case COMPARE:
			if (over == over2)
			{
				cout << "Типы одежды равны\n";
			}
			else
			{
				cout << "Типы одежды не равны\n";
			}
			break;
		case ASSIGN:
			over = over2;
			break;
		case COMPARE_PRICE:
			over > over2;
			break;
		case PRINT:
			printf("Тип №1 - %s\nЦена - %d$\nТип №2 - %s\nЦена - %d$\n", over.get_type(), over.get_price(), over2.get_type(), over2.get_price());
			break;
		case EXIT:
			break;
		}

	} while (choise != 0);

	return 0;
}