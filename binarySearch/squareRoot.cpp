#include <iostream>
using namespace std;
long long int searchSqrt(int n)
{
    int s = 0;
    int e = n;
    int ans = -1;
    while (s <= e)
    {
        long long int mid = s + (e - s) / 2;
        if (mid * mid == n)
        {
            return mid;
        }
        else if (mid * mid > n)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
    }
    return ans;
}
double floatSqrt(int ans, int n, int precision)
{
    double factor = 1;
    double perfectAns = ans;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = perfectAns; j * j <= n; j += factor)
        {
            perfectAns = j;
        }
    }
    return perfectAns;
}
main()
{
    int n;
    cout << "Enter a positive integer" << endl;
    cin >> n;
    int ans = searchSqrt(n);
    if (ans * ans == n)
    {
        cout << "Square root of " << n << " is " << ans;
    }
    else
    {
        double perfectAns = floatSqrt(ans, n, 4);
        cout << "Square root of " << n << " is " << perfectAns;
    }
}
