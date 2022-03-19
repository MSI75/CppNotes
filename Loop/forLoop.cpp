/* #include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for (int i = 0; i <= n; i++)
    {
        cout << "Hello World !" << endl;
    }
    return 0;
} */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    cout << sum << endl;
    return 0;
}