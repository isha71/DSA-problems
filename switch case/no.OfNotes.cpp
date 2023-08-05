#include <iostream>
using namespace std;
int main()
{
    int amt;
    cout << "Enter your amount" << endl;
    cin >> amt;
    int hundred, fifty, twenty, one, residue;
    residue = amt;
    int i = 1;
    switch (1)
    {
    case 1:
    {
        hundred = residue / 100;
        residue = residue % 100;
        cout << "you need " << hundred << " hundred rupees notes " << endl;
    }

    case 2:
    {
        fifty = residue / 50;
        residue = residue % 50;
        cout << fifty << " fifty rupees notes " << endl;
    }
    case 3:
    {
        twenty = residue / 20;
        residue = residue % 20;
        cout << twenty << " twenty rupees notes " << endl;
    }
    case 4:
    {
        one = residue / 1;
        residue = residue % 1;
        cout << one << " one rupees notes" << endl;
    }
    }
}