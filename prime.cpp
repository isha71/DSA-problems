#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a positive number" << endl;
    int n;
    cin >> n;
    if (n < 2)
    {
        cout << n << " is not prime, first prime no. is 2" << endl;
    }
    else
    {
        int i = 2, res = 1;
        while (n > i)
        {
            if (n % i == 0)
            {
                res = 0;
                break;
            }
            else
            {
                i++;
            }
        }
        if (res == 0)
        {
            cout << n << " is not prime" << endl;
        }
        else
        {
            cout << n << " is prime" << endl;
        }
    }
}