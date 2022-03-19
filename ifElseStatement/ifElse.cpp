#include <iostream>
using namespace std;

int main()
{
    int saving;
    cin >> saving;

    if (saving > 5000)
    {
        if (saving > 7000)
        {
            cout << "Every month go to shopping" << endl;
        }
        else
        {
            cout << "esy student life " << endl;
        }
    }
    else if (saving > 2000)
    {
        cout << "simple life for student" << endl;
    }
    else
    {
        cout << "Hard life for student" << endl;
    }

    return 0;
}