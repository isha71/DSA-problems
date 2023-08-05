#include <iostream>
using namespace std;
int main()
{
    cout << "Enter any positive number" << endl;
    int n;
    cin >> n;
    int sum = 0; 
    int i = 2;
    while (n >= i)
    {
        sum += i;
        i += 2;
    }
    cout << "Sum of total even numbers between 1 and " << n << " is " << sum << endl;
}