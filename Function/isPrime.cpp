#include <iostream>
#include <cmath>
using namespace std;

int isPrime(int n);

int main()
{
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))
        {
            cout << i << endl;
        }
    }
    return 0;
}

int isPrime(int n)
{
    // int flag = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
            // flag = 1;
            break;
        }
    }
    // if (flag == 0)
    // {
    //     return true;
    // }
    return true;
}