#include <iostream>
using namespace std;

int fib(int n)
{
    if (n == 1)
    {
        return 0;
    }
    int a = 0, b = 1;
    int term = 1;
    for (int i = 1; i <= n - 2; i++)
    {
        term = a + b;
        a = b;
        b = term;
    }
    return term;
}

int main()
{
    int n;
    cout << "Enter which fibonacci term you wanna see" << endl;
    cin >> n;
    int ans = fib(n);
    cout << "term " << n << " of fibonacci sequence is " << ans << endl;
}