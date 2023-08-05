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
        int j = 1;
        while (j <= i)
        {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }

    cout << endl;

    int k = 1;
    while (k <= n)
    {
        int j = 1;
        while (j <= k)
        {
            cout << k << " ";
            j++;
        }
        cout << endl;
        k++;
    }

    cout << endl;

    int l = 1, m = 1;
    while (l <= n)
    {
        int j = 1;
        while (j <= l)
        {
            cout << m << " ";
            m++;
            j++;
        }
        cout << endl;
        l++;
    }

    cout << endl;

    int p = 1;
    while (p <= n)
    {
        int j = 1, q = p;
        while (j <= p)
        {
            cout << q << " ";
            q++;
            j++;
        }
        cout << endl;
        p++;
    }

    cout << endl;

    // previous pattern with two variables:
    int q = 1;
    while (q <= n)
    {
        int j = q;
        while (j < 2 * q)
        {
            cout << j << " ";
            j++;
        }
        cout << endl;
        q++;
    }
}