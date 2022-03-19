#include <iostream>
using namespace std;

int main()
{
    float a, b;
    cout << "intput two numbers" << endl;
    cin >> a >> b;

    char op;
    cout << "input an operator" << endl;
    cin >> op;
    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;

    default:
        cout << "Nothing" << endl;
        break;
    }
    return 0;
}