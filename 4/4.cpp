#include <iostream>
#include<ctime>

using namespace std;

int main()
{
	setlocale(0, "");
	int c;
	cout << "Введите число от 0 до 10: ";
	cin >> c;

	const int N = 2, M = 5;
	int a[N][M] = {};
	srand(time(NULL));
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)  //Вывод на экран строки i
		{
			a[i][j] = rand() % 10;
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "\n";
	int e;
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			if (a[i][j] > c) // поиск элементов больше заданного числа
			{
				e = (i, j); // замена элементов больше заданного числа данным числом
				cout << e << " ";
			}
		}
	}
	cout << "\n";
}
