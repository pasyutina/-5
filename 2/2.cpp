using namespace std;
#include <iostream>

int main()
{
	setlocale(0, "");
	int n, m;
	cout << "Введите размерность массива: ";
	cin >> n >> m;
	int a[100][100], i, j, min, max, sum = 0, count = 0;

	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < m; j++) //ввод чисел массива
		{
			cout << "Введите числа массива: ";
			cin >> a[i][j];
		}
	}
	max = min = a[0][0];

	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
		{
			sum += a[i][j]; // счет суммы 
			count++; 
		}
	cout << "Сумма = " << sum << "\nСреднее арифметическое = " << sum / count ;
}
