using namespace std;
#include <iostream>

double Ft(double x)
{
	double b = x * 5280.002;
	return b;
}

double Km(double x)
{
	double a = x * 1.609;
	return a;
}

int main()
{
	setlocale(0, "");
	double x;
	cout << "Введите x: ";
	cin >> x;
	double a = Km(x);
	double b = Ft(x);
	cout << a << " км" << endl;
	cout << b << " фт" << endl;
	return 0;
}
