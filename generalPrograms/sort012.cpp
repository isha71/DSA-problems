#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1,2,0,0,2};
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }
        else if (arr[i] == 1)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    cout << count0 << count1 << count2;

    int j = 0;
    for (int i = 0; i < count0; i++)
    {
        arr[j] = 0;
        j++;
    }
    for (int i = 0; i < count1; i++)
    {
        arr[j] = 1;
        j++;
    }
    for (int i = 0; i < count2; i++)
    {
        arr[j] = 2;
        j++;
    }

    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
}
