#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
#include <iostream>

double Square(double r)
{
	double S = M_PI * pow(r, 2);
	return S;
}

int main()
{
	setlocale(0, "");
	double r;
	cout << "Введите радиус окружности: ";
	cin >> r;
	double S = Square(r);
	cout << "Число в градусах = " << S << endl;
	return 0;
}
