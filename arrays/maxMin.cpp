#include <iostream>
#include <climits>
using namespace std;

int minimum(int arr[], int size)
{

    int mini = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < mini)
        {
            mini = arr[i];
        }
    }
    for (int i = 0; i < size; i++)
    {
        mini = min(mini, arr[i]);
    }
    return mini;
}

int maximum(int arr[], int size)
{
    int maxi = INT_MIN;

    // for (int i = 0; i < size; i++)
    // {
    //     if (arr[i] > maxi)
    //     {
    //         maxi = arr[i];
    //     }
    // }

    for (int i = 0; i < size; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}

int main()
{
    int n;
    cout << "Enter how many elements you wanna enter" << endl;
    cin >> n;
    cout << "Enter your elements" << endl;
    int array[100];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int max = maximum(array, n);
    int min = minimum(array, n);
    cout << "Maximum is " << max << endl;
    cout << "Minimum is " << min << endl;
}
