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

	cout << "1 - ������ ���������� � ������\n2 - �������� ���� ������\n3 - ���������\n4 - �������� ���� ������ ����\n5 - �����\n0 - EXIT\n";

	do
	{
		cin >> choise;
		switch (choise)
		{
		case FILL:
			cin.ignore();
			cout << "������� ��� ������ �1: ";
			gets_s(buf);
			over.set_type(buf);
			cout << "������� ���� ������ �1: ";
			cin >> num;
			over.set_price(num);

			cin.ignore();
			cout << "������� ��� ������ �2: ";
			gets_s(buf);
			over2.set_type(buf);
			cout << "������� ���� ������ �2: ";
			cin >> num;
			over2.set_price(num);
			break;
		case COMPARE:
			if (over == over2)
			{
				cout << "���� ������ �����\n";
			}
			else
			{
				cout << "���� ������ �� �����\n";
			}
			break;
		case ASSIGN:
			over = over2;
			break;
		case COMPARE_PRICE:
			if (over > over2)
			{
				cout << "���� ������ ������ ������, ��� ���� ������\n";
			}
			else if (over < over2)
			{
				cout << "���� ������ ������ ������, ��� ���� ������\n";
			}
			else
			{
				cout << "���� ����� ��� ���� ������\n";
			}
			break;
		case PRINT:
			printf("��� �1 - %s\n���� - %d$\n��� �2 - %s\n���� - %d$\n", over.get_type(), over.get_price(), over2.get_type(), over2.get_price());
			break;
		case EXIT:
			break;
		}

	} while (choise != 0);

	return 0;
}