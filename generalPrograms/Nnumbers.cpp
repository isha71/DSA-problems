#include<iostream>
using namespace std;
int main(){
int n;
    cout << "Enter any number\n";
    cin >> n ;
    int a = 1;
    while(a <= n){
        cout << a << " ";
        a++;
    }
    cout << " ";

    int b = 1;
    int sum = 0;
    while(b <= n){
        sum = sum + b; 
        b++;
    }
    cout << "Sum of 1 to " << n << " is:"<< sum << endl;


    int c = 2;
    int even_sum = 0;
    while(c <= n){
        even_sum = even_sum + c; 
        c = c + 2;
    }
    cout << "Sum of  all even no.s between 1 to " << n << " is: "<< even_sum << endl;













    return 0;
}