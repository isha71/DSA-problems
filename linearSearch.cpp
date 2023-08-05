#include <iostream>
using namespace std;

bool linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int key;
    int arr[10] = {9, 0, -9, 8, 5, 58, 9, -52, 90, 10};
    cout << "Enter your key" << endl;
    cin >> key;
    bool ans = linearSearch(arr, 10, key);
    if (ans)
    {
        cout << "Key is present" << endl;
    }
    else
    {
        cout << "Key is not present" << endl;
    }
}