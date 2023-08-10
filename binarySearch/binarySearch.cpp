// leetcode 724 - find pivot index
// codestudio - First and Last Position of an Element In Sorted Array
// leetcode 852 - Peak Index in a Mountain Array
// codestudio - Search In Rotated Sorted Array
// codestudio - Square Root of a number





#include <iostream>
using namespace std;

bool binarySearch(int arr[], int n, int key)
{

    int mid, i = 0, j = n - 1;
    while (i <= j)
    {
        mid = i + ((j - i) / 2);
        if (arr[mid] == key)
        {
            return 1;
        }
        else
        {
            if (key > arr[mid])
            {
                i = mid + 1;
            }
            else
            {
                j = mid - 1;
            }
        }
    }
    return 0;
}

int main()
{
    int arr[5] = {2, 6, 7, 8, 41};
    bool ans = binarySearch(arr, 5, 100);
    if (ans == 1)
    {
        cout << "key is present" << endl;
    }
    else
    {
        cout << "key is not present" << endl;
    }
}
