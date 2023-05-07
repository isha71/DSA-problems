#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a positive no. to draw pattern" << endl;
    int n;
    cin >> n;
    char c = 65;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << c << " ";
            j++;
        }
        c++;
        cout << endl;
        i++;
    }

    cout << endl;

    int k = 1;
    while (k <= n)
    {
        int j = 1;
        char c = 65;
        while (j <= n)
        {
            cout << c << " ";
            c++;
            j++;
        }
        cout << endl;
        k++;
    }

    cout << endl;

    int l = 1;
    char ch = 65;
    while (l <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;
        l++;
    }

    cout << endl;

    int m = 65;
    int stop = m + n;
    while (m < stop)
    {
        int j = m;
        int stop2 = j + n;
        while (j < stop2)
        {
            char ch = j;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        m++;
    }
}