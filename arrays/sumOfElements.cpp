#include <iostream>
using namespace std;

int arraySum(int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
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
    int answer = arraySum(array, n);
    cout << "Sum of array is " << answer << endl;
}