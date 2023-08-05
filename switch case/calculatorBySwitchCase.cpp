#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char ch;
    cout << "Enter value of a and b " << endl;
    cin >> a >> b;
    cout << "Enter which operation" << endl;
    cin >> ch;
    switch (ch)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        cout << a / b;
        break;
    default:
        cout << "Invalid operator";
    }

    return 0;
}