#include <iostream>
using namespace std;

int findDuplicate(int arr[])
{
    // int size = sizeof(arr) / sizeof(int);
    int size = 9;
    int ans;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            ans = arr[i] ^ arr[j];
            if (ans == 0)
            {
                cout << "this is count " << count << endl;
                return arr[i];
            }
        }
    }
}

int main()
{
    int arr[] = {3, 8, 7, 6, 5, 2, 6, 1, 4};
    int dup = findDuplicate(arr);
    cout << "this is duplicate " << dup << endl;
}