int firstOcc(int arr[], int n, int key)
{
    int i = 0;
    int j = n - 1;
    int first = -1;
    do
    {
        int mid = i + (j - i) / 2;
        if (arr[mid] == key)
        {
            first = mid;
            j = mid - 1;
        }
        else if (key > arr[mid])
        {
            i = mid + 1;
        }
        else
        {
            j = mid - 1;
        }
    } while (i <= j);
    return first;
}

int lastOcc(int arr[], int n, int key)
{
    int i = 0;
    int j = n - 1;
    int last = -1;
    do
    {
        int mid = i + (j - i) / 2;
        if (arr[mid] == key)
        {
            last = mid;
            i = mid + 1;
        }
        else if (key > arr[mid])
        {
            i = mid + 1;
        }
        else
        {
            j = mid - 1;
        }
    } while (i <= j);
    return last;
}

#include <iostream>
using namespace std;
int main()
{
    int n;
    int arr[1000];
    int key;
    cout << "Enter size of your array" << endl;
    cin >> n;
    cout << "Enter a sorted array to find out the no. of occurences of a element " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter key to find out no. of occurences" << endl;
    cin >> key;

    int first = firstOcc(arr, n, key);
    int last = lastOcc(arr, n, key);

    int ans = (last - first) + 1;

    cout << "No. of occurences of " << key << " is " << ans << endl;
}