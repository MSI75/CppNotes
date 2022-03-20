#include <iostream>
using namespace std;

int main()
{

    /*

    int a = 10;
    int b = a++;
    cout << b << "\n"
         << a << endl;

    int c = 10;
    int d = ++c;
    cout << d << "\n"
         << c << endl;


    */

    /*

    int i = 1;
     i = i++ + ++i;
     cout << i << endl;

     */

    /*

    int i = 1;
     int j = 2;
     int k;
     //  1 + 2 +  1  +  2  +  3  + 4
     k = i + j + i++ + j++ + ++i + ++j;
     cout << k << endl;

     */

    /*

    int i = 2;
    //  2 - (3-1) +  3  -  3
    i = i++ - --i + ++i - i--;
    cout << i << endl;

    */

    /*

    int a = 10;
    int b = a--;
    cout << b << "\n"
         << a << endl;

    int c = 10;
    int d = --c;

    cout << d << "\n"
    << c << endl;

    */

    /* int i = 1, j = 2, k = 3;
    //       1  - 2   - 3
    int m = i-- - j-- - k--;
    cout << m << endl; */

    int i = 10, j = 20, k;
    //  10  -  9  +  19 - 20  +  9  -  20 + 10  - 19
    k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;
    cout << k << endl;

    return 0;
}