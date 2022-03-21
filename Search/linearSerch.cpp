#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int kay);

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int kay;
    cin >> kay;

    cout << linearSearch(arr, n, kay);

    return 0;
}

int linearSearch(int arr[], int n, int kay)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == kay)
        {
            return i;
        }
    }
    return -1;
}