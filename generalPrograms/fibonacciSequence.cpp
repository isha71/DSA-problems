#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the no. to print the fibonacci sequence upto" << endl;
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "0" << endl;
    }
    else
    {
        int a = 0, b = 1;
        cout << a << " " << b << " ";
        for (int i = 1; i <= n - 2; i++)
        {
            int c = a + b;
            cout << c << " ";
            a = b;
            b = c;
        }
    }
    return 0;
}