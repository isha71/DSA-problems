#include <iostream>
using namespace std;

int setBits(int n)
{
    int count = 0;

    while (n != 0)
    {
        if (n & 1 == 1)
        {
            count++;
        }
        n = n >> 1;
    }
    return count;
}

int main()
{
    int a, b;
    cout << "Enter value of a and b " << endl;
    cin >> a >> b;
    int aBits = setBits(a);
    int bBits = setBits(b);
    cout << "Total set bits in " << a << " and " << b << " is : " << (aBits + bBits);
}