#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    cout << "Enter any decimal no." << endl;
    int n;
    cin >> n;
    int i = 0;
    int answer = 0;
    int power;
    while (n != 0)
    {
        int lastBit = n & 1;
        power = pow(10,i) + 0.5;
        answer = (lastBit * power) + answer;
        n = n >> 1;
        i++;
    }
    cout << "In binary " << answer << endl;
}


