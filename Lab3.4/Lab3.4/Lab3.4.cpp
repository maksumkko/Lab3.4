// Lab_03_4.cpp
// < ����� ������ ���������� >
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 0.3

#include <iostream>

using namespace std;

int main()
{
	double R;
	double x; // ������� ��������
	double y; // ������� ��������

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	if (x >= -R && x <= 0 && y >= 0 && y <= R && pow(x, 2) + pow(y - R, 2) <= pow(R, 2) && pow(x - R, 2) + pow(y, 2) <= pow(R, 2))
	{
		cout << "No" << endl;
	}
	else
	{
		cout << "Yes" << endl;
	}
	return 0;
}