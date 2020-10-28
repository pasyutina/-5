#pragma warning(default:4716)
using namespace std;
#include <iostream>

int Palindrom(int x)
{
    if (x >= 10000 && x <= 99999)
    {
        if ((x / 10) % 10 == (x / 1000) % 10 && x % 10 == x / 10000)
        {
            cout << "Введенное число - палиндром" << endl;
        }
        else
        {
            cout << "Введенное число - не палиндром" << endl;
        }
    }
    else
    {
        cout << "Введенное число не пятизначное!!!" << endl;
    }
    return x;
}

int main()
{
    setlocale(0, "");
    int x;
    cout << "Введите x: ";
    cin >> x;
    Palindrom(x);
    return 0;
}
