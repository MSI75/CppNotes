/* #include <iostream>
#include <cmath>
using namespace std;

void pythagoreanTriple(int a, int b);

int main()
{
    int a, b;
    cin >> a >> b;

    pythagoreanTriple(a, b);
    return 0;
}

void pythagoreanTriple(int a, int b)
{
    int c;
    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a + b);
    cout << c << endl;
} */

#include <iostream>
using namespace std;

bool check(int x, int y, int z);

int main()
{
    int x, y, z;
    cin >> x >> y >> z;

    if (check(x, y, z))
    {
        cout << "Pythagorean Triplets " << endl;
    }
    else
    {
        cout << "Not a pythagorean Triplets" << endl;
    }
    return 0;
}

bool check(int x, int y, int z)
{
    int a = max(x, max(y, z));
    int b, c;

    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }

    if (a * a == (b * b + c * c))
    {
        return true;
    }
    else
    {
        return false;
    }
}