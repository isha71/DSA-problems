#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a positive no. to draw pattern" << endl;
    int n;
    cin >> n;
    int i = n;
    while(i >= 1){
        int j = i;
        while(j <= n){
            char c = 'A' + j-1;
            cout << c << " ";
            j++;
        }
        i--;
        cout << endl;
    }


}
