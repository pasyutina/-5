#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
#include <iostream>

double Radian(double x)
{
	double y = (x * 180) / M_PI;
	return y;
}

int main()
{
	setlocale(0, "");
	double x;
	cout << "Введите x(в радианах) ";
	cin >> x;
	double y = Radian(x);
	cout << "Число в градусах = " << y;
	return 0;
}
