#include <iostream>
using namespace std;
int main(){
    cout << "Enter the number to find sum from 1 to given number" << endl;
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    cout << "Sum from 1 to " << n << " is "<< sum << endl;

}
 