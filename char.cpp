#include <iostream>
using namespace std;
int main(){
    cout << "Enter any character" << endl;
    char n;
    cin >> n;
    cout << n << endl;
    if(n >= 65 && n <= 90){
        cout << "This is uppercase" << endl;
    }
    else if(n >= 97 && n <= 122){
        cout << "This is lowercase" << endl;
    }
    else{
        cout << "This is number" << endl;
    }
}