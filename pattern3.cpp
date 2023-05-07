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
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    cout << endl;

    int k = 1;
    while (k <= n)
    {
        int j = n;
        while (j > 0)
        {
            cout << j << " ";
            j--;
        }
        cout << endl;
        k++;
    }
}