// Lab_03_3.cpp
// ������� ���������
// ����������� ������ � 3.3
// ������������, ������ �������� �������.
// ������ 22
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double R; // ������� ��������
	double y; // ��������� ���������� ������
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// ������������ � ����� ����
	if (x <= -8)
		y = -R;
	else
		if (-8 < x && x <= -R)
			y = (R/(8-R));
		else
			if (-R < x && x <= R)
				y = -1 * sqrt(pow(R,2)-pow(x,2));
			else
				if (R < x && x <= 5)
					y = (2*(x-R))/(5-R);
				else
					y = 3;
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}