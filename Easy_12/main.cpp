#include <iostream>

using namespace std;
//---------------------������� � ���������---------------------------------------





//------------------------MAIN----------------------------------------------------
int main() {
	setlocale(LC_ALL, "RU");

	//-------------------------------���� �����-------------------------------------

	int x, y;

	cout << "������� ���������� �����: " << endl;
	cout << "X = ";
	cin >> x;
	cout << "Y = ";
	cin >> y;

	if (x > 0 && y > 0)
	{
		cout << " ����� � 1 �������� ";
	}
	else if (x < 0 && y > 0)
	{
		cout << "����� �� 2 �������� ";
	}
	else if (x < 0 && y < 0)
	{
		cout << "����� � 3 ��������";
	}
	else if (x > 0 && y < 0)
	{
		cout << "����� � 4 ��������";
	}
	else if (x == 0 || y == 0)
	{
		cout << "����� � ������ ��������� ��� �� ����� �� ����";
	}

	cout << endl << endl;

	system("pause");

	return 0;

}
