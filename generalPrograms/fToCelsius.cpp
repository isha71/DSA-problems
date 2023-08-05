#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the unit in which you want to enter the temperature \n Enter C for celsius \n Enter F for fahrenheit" << endl;
    char c;
    c = cin.get();
    int n, res;
    cout << "Enter the value of tempearture" << endl;
    cin >> n;
    int original = n;
    if (c == 'C' || c == 'c')
    {
        res = (n * 9 / 5) + 32;
        cout << original << " degree celsius = " << res << " fahrenheit" << endl;
    }
    else
    {
        res = (n - 32) * 5 / 9;
        cout << original << " fahrenheit = " << res << " degree celsius" << endl;
    }
}