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
        while (j <= n)
        {
            if (j >= n - (i - 1))
            {
                cout << " *";
            }
            else
            {
                cout << "  ";
            }
            j++;
        }
        cout << endl;
        i++;
    }

    cout << endl;

    //     *
    //    * *
    //   * * *
    //  * * * *
    int k = 1;
    while (k <= n)
    {
        int j = 1;
        while (j <= n)
        {
            if (j >= n - (k - 1))
            {
                cout << " *";
            }
            else
            {
                cout << " ";
            }
            j++;
        }
        cout << endl;
        k++;
    }

    cout << endl;

    int l = n;
    while (l >= 1)
    {
        int j = l;
        while (j >= 1)
        {
            cout << " *";
            j--;
        }
        cout << endl;
        l--;
    }

    cout << endl;
    int m = n;
    while (m >= 1)
    {
        int j = n;
        while (j >= 1)
        {
            if (j <= m)
            {
                cout << " *";
            }
            else
            {
                cout << "  ";
            }
            j--;
        }
        cout << endl;
        m--;
    }

    cout << endl;

    int p = 1;
    while (p <= n)
    {
        int j = 1;
        while (j <= n)
        {
            if (j >= p)
            {
                cout << " " << p;
            }
            else
            {
                cout << "  ";
            }
            j++;
        }
        cout << endl;
        p++;
    }
}