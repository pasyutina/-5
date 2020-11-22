using namespace std;
#include <iostream>


int main()
{
	setlocale(0, "");
    const int n = 10;
    double a[n][n] = { 0 };
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) //Вывод на экран строки i
        {
            a[i][j] = rand() % 10;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    double sum = 0;
    for (int i = 0; i < n; i++) // счет суммы элементов главной диагонали
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum += a[i][i];
            }
        }
    }
    cout << "Сумма элементов главной диагонали = " << sum << endl;
    system("pause>>null");
    return 0;
}
