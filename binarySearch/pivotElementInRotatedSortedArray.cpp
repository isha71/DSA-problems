#include <iostream>
using namespace std;

int searchPivot(int arr[], int size){
    int start = 0;
    int end = size-1;
    while(start < end){
        int mid = start + (end-start)/2;
        if(arr[mid] > arr[0]){
            start = mid+1;
        }
        else{
            end = mid;
        }


    }
    return start;
}

int main()
{
    int arr[9] = {56, 85, 230, 458 , 13, 15, 45, 48, 50};

    // will give wrong answer for sorted arrays.
    // int arr[4] = {2,3,5,8};    
    int ans = searchPivot(arr, 9);

    cout << "Pivot element is " << arr[ans] << " at index "  << ans;
}


































