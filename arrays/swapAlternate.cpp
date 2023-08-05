#include <iostream>
using namespace std;

void swapAlternate(int a[], int size)
{
    // even case
    if (size % 2 == 0)
    {
        for (int i = 0; i < size;)
        {
            swap(a[i], a[i + 1]);
            i += 2;
        }
    }

    // odd case
    else
    {
        for (int i = 0; i < size - 1;)
        {
            swap(a[i], a[i + 1]);
            i += 2;
        }
    }
    cout << "After alternate swapping" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int size;
    int a[100];
    cout << "enter size of array" << endl;
    cin >> size;
    cout << "Enter array elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "your entered array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    swapAlternate(a, size);
}
