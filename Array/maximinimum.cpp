#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // int maxiN = INT_MAX;
    // int miniN = INT_MIN;
    int maxiN = 0;
    int miniN;
    for (int i = 0; i < n; i++)
    {
        // maxiN = max(maxiN, arr[i]);
        // miniN = min(miniN, arr[i]);

        if (arr[i] > maxiN)
        {
            maxiN = arr[i];
        }
        if (arr[i] < miniN)
        {
            miniN = arr[i];
        }
    }
    cout << maxiN << " " << endl;
    cout << miniN << " " << endl;

    return 0;
}