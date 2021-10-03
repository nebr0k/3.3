#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	// розгалуження в повній формі
	if (x <= 0)
		y = -(R * x + 6 * R) / 6;
	else
		if (x <= R)
			y = R - sqrt(R * R + x * x);
		else
			if (x > R || x < 2 * R)
				y = sqrt(R * R - (x - R) * (x - R));
			else
				y = R;	
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}
