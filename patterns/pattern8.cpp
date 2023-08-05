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
        int j = i;
        while (j >= 1)
        {
            char c = 'A' + (i - 1);
            cout << c << " ";
            j--;
        }
        i++;
        cout << endl;
    }

    cout << endl;

    int k = 1;
    char c = 'A';
    while (k <= n)
    {
        int j = k;
        while (j >= 1)
        {
            cout << c << " ";
            c++;
            j--;
        }
        k++;
        cout << endl;
    }

    cout << endl;

    int l = 1;
    while (l <= n)
    {
        int j = l;
        char c = 'A' + (l-1);
        while (j >= 1)
        {
            cout << c << " ";
            c++;
            j--;
        }
        l++;
        cout << endl;
    }
}
