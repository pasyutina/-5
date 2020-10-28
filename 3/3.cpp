using namespace std;
#include <iostream>

double SredA(double a, double b, double c)
{
    double x = (a + b + c) / 3;
    return x;
}

int main()
{
	setlocale(0, "");
	double a;
	double b;
	double c;
	cout << "Введите числа a, b, c: ";
	cin >> a >> b >> c;
	double x = SredA(a, b, c);
	cout << "Среднее арифметичесткое трех чисел = " << x;
	return 0;
}
