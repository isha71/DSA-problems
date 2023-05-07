#include <iostream>
using namespace std;
int main(){
    cout << "Enter a positive no. to draw pattern" << endl;
    int n;
    cin >> n;
    int j = n;
    while(j > 0){
        int i = 1;
        while(n >= i){
            cout << "* ";
            i++;
        }
        cout << endl;
        j--;
    }
}