#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a positive no. to draw pattern" << endl;
    int n;
    cin >> n;
    int i = 1;
    int j = 1;
    while (i <= n)
    {
        int k = 1;
        while (k <= n)
        {
            cout << j << " ";
            j++;
            k++;
        }
        cout << endl;
        i++;
    }
}