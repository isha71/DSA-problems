#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a positive no. to draw pattern" << endl;
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = n;
        while (j >= 1)
        {
            if (j <= i)
            {
                cout << " " << i;
            }
            else
            {
                cout << "  ";
            }
            j--;
        }
        cout << endl;
        i++;
    }

    cout << endl;

    int k = 1;
    while (k <= n)
    {
        int j = 1;
        while (j <= n)
        {
            if (j >= k)
            {
                cout << " " << j;
            }
            else
            {
                cout << "  ";
            }
            j++;
        }
        cout << endl;
        k++;
    }

    cout << endl;

    int l = n;
    int count = 1;
    while (l >= 1)
    {
        int j = 1;
        while (j <= n)
        {
            if (j >= l)
            {
                cout << count;
                count++;
            }
            else
            {
                cout << " ";
            }
            j++;
        }
        cout << endl;
        l--;
    }

    




}