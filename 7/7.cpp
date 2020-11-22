using namespace std;
#include <iostream>

bool func(int* a, const int& N)
{
    int value = 1;
    for (int i = 0; i < N; i++)
        value *= a[i];
    return (10 <= value && value <= 999);
}

int main(int argc, char* argv[])
{
    const int N = 6;
    int* a = new int[N];
    for (int i = 0; i < N; i++)
        a[i] = i + 1;
    cout << func(a, N) << endl;
    return 0;
}