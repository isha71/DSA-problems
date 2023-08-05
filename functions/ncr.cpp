#include <iostream>
using namespace std;

int fact(int a)
{
    if (a == 1 || a == 0)
    {
        return 1;
    }
    int answer = a;
    int i = 1;
    do
    {
        answer = answer * (a - i);
        i++;

    } while (i < a);
    return answer;
}

int ncr(int n, int r)
{
    int nFact = fact(n);
    int rFact = fact(r);
    int denoFact = fact(n - r);
    return ((nFact) / (rFact * denoFact));
}

int main()
{
    int n, r;
    cout << "Enter value of n and r " << endl;
    cin >> n >> r;
    int answer = ncr(n, r);
    cout << "value of ncr is " << answer << endl;
}