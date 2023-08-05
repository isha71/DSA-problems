#include <iostream>
using namespace std;

void reverseArray(int arr[], int n)
{
    // One solution

    // int loop_count = n/2;
    // int store;
    // for(int i = 1; i <= loop_count; i++){
    //     store = arr[i-1];
    //     arr[i-1] = arr[n-i];
    //     arr[n-i] = store;
    // }
    // for(int i = 0; i < n; i++){
    //     cout << arr[i] << " " ;
    // }

    // second and efficient solution 
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[9] = {9, 0, -9, 8, 5, 58, 9, -52, 90};
    reverseArray(arr, 9);
}