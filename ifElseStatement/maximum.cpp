/* #include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a > b)
    {
        cout << "Maximum Number A = " << a << endl;
    }
    else if (b > c)
    {
        cout << "Maximum Number B = " << b << endl;
    }
    else
    {
        cout << "Maximum Number C = " << c << endl;
    }
    return 0;
} */

// OR
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > b)
        {
            cout << "Maximum Number A = " << a << endl;
        }
        else
        {
            cout << "Maximum Number B = " << b << endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "Maximum Number B = " << b << endl;
        }
        else
        {
            cout << "Maximum Number C = " << c << endl;
        }
    }

    return 0;
}