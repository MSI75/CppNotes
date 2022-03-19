#include <iostream>
using namespace std;

int main()
{
    int a;  // declaretions
    a = 12; // initialization

    cout << "size of init " << sizeof(a) << endl;

    float b;
    b = 75.75;

    cout << "size of float " << sizeof(b) << endl;

    char c;
    c = 'a';

    cout << "size of character " << sizeof(c) << endl;

    double d;
    d = 7.69;

    cout << "size of double " << sizeof(d) << endl;

    bool e;
    e = 1;

    cout << "size of boolean " << sizeof(e) << endl;

    short int si;

    cout << "size of shortint  " << sizeof(si) << endl;

    long int li;

    cout << "size of longint  " << sizeof(li) << endl;

    return 0;
}