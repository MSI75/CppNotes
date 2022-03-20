#include <iostream>
using namespace std;

int factorial(int n);

int main()
{
    int n;
    cin >> n;

    cout << factorial(n) << endl;
    return 0;
}

int factorial(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}