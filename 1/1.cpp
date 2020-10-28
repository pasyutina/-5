#include <conio.h>
using namespace std;
#include <iostream>

bool Prostchis(int k)
{
	if (k < 1)
		return false;
	for (int i = 2; i * i <= k; ++i)
	{
		if (k % i == 0)
		{
			return false;
		}
		return true;
	}
}

int main()
{
	setlocale(0, "");
	int a = 1;
	int b = 200;
	int c = 1;
	for (int i = a; i <= b; i++)
	{
		if (Prostchis(i))
		{
			if (i > c)
				cout << i << " ";
		}
	}
	return 0;
}


