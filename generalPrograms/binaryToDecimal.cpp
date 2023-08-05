#include<iostream>
#include<math.h>
using namespace std;
int main(){
    cout << "enter any binary representation" << endl;
    int n;
    cin >> n;
    int i = 0;
    int answer = 0;
    int nextDividend = n;
    while(nextDividend != 0){
        int lastDigit = nextDividend % 10;
        int power = pow(2, i);
        if(lastDigit == 1){
            answer = answer + power;
        }
        i++;
        nextDividend = nextDividend / 10;
    }
    cout << "In decimal " << answer << endl;
}