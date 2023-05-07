#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a positive no. to draw pattern" << endl;
    int n;
    cin >> n;
    int j = 1;
    while (j <= n)
    {
        int k = 1;
        while (k <= n)
        {
            cout << j << " ";
            k++;
        }
        cout << endl;
        j++;
    }
}