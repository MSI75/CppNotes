#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "Even Number = " << n << endl;
    }
    else
    {
        cout << "Odd Number = " << n << endl;
    }

    return 0;
}