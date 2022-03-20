#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;
    int original = n;
    while (n > 0)
    {
        int lastDigit = n % 10;
        sum += pow(lastDigit, 3);
        n = n / 10;
    }
    if (sum == original)
    {
        cout << "Armstrong Number" << endl;
    }
    else
    {
        cout << "Not armstrong number" << endl;
    }

    return 0;
}