// Lab_03_3.cpp
// Øêðèíäà Âîëîäèìèð
// Ëàáîðàòîðíà ðîáîòà ¹ 3.3
// Ðîçãàëóæåííÿ, çàäàíå ãðàô³êîì ôóíêö³¿.
// Âàð³àíò 22
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // âõ³äíèé àðãóìåíò
	double R; // âõ³äíèé ïàðàìåòð
	double y; // ðåçóëüòàò îá÷èñëåííÿ âèðàçó
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// ðîçãàëóæåííÿ â ïîâí³é ôîðì³
	if (x <= -8)
		y = -R;
	else
		if (-8 < x && x <= -R)
			y = (-((R*(R+x))/(R-8)));
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
