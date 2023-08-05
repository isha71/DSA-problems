#include <iostream>
using namespace std;

int ap(int n, int a, int r)
{
    return (a + ((n - 1) * r));
}

int main()
{
    int a, r, n;
    cout << "Generating AP series: " << endl
         << "Enter value of a and r " << endl;
    cin >> a >> r;
    cout << "Enter which term you want to see " << endl;
    cin >> n;
    int nth = ap(n, a, r);
    cout << "term " << n << " of this AP is : " << nth << endl;
}