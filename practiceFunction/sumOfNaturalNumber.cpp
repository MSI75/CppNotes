/* #include <iostream>
using namespace std;

void naturalNumber(int n);

int main()
{
    int n;
    cin >> n;
    naturalNumber(n);
    return 0;
}

void naturalNumber(int n)
{
    for (int i = 0; i <= n; i++)
    {
        cout << i << endl;
    }
} */

#include <iostream>
using namespace std;

int sum(int n);

int main()
{
    int n;
    cin >> n;

    cout << sum(n) << endl;
    return 0;
}

int sum(int n)
{
    int count = 0;
    for (int i = 0; i <= n; i++)
    {
        count += i;
    }
    return count;
}