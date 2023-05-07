#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a positive no. to draw pattern" << endl;
    int n;
    cin >> n;
    int i = n;
    int k;
    while (i >= 1)
    {
        int j = 1;
        while (j <= n)
        {
            if (j <= i)
            {
                cout << j;
            }
            else
            {
                cout << "*";
            }
            j++;
        }
        k = n;
        while (k >= 1)
        {
            if (k <= i)
            {
                cout << k;
            }
            else
            {
                cout << "*";
            }
            k--;
        }

        cout << endl;
        i--;
    }
}