#include <iostream>
using namespace std;

int main()
{
    char button;
    cout << "Button character: " << endl;
    cin >> button;
    switch (button)
    {
    case 'a':
        cout << "Apple" << endl;
        break;
    case 'b':
        cout << "Ball" << endl;
        break;
    case 'c':
        cout << "cap" << endl;
        break;
    case 'd':
        cout << "dome" << endl;
        break;

    default:
        cout << "Nothing" << endl;
        break;
    }

    return 0;
}