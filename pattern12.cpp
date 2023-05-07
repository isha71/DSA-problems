#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a positive no. to draw pattern" << endl;
    int n;
    cin >> n;
    int i = 1;
    int k;
    while (i <= n)
    {
        int j = n;
        int count = 1;
        while (j >= 1)
        {
            if (j <= i)
            {
                cout << count;
                count++;
            }
            else
            {
                cout << " ";
            }
            j--;
        }
        k = 1;
        int value = i - 1;
        while (k <= n - 1)
        {
            if (value > 0){
                cout << value;
                value--;
            }
            else{
                cout << " ";
            }
            k++;
        }

        cout << endl;
        i++;
    }
}