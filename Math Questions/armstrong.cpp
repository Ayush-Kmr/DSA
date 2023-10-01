#include <bits/stdc++.h>
using namespace std;

int armstrong(int x)
{
    int y = x;
    int length = log10(x) + 1;
    double value = 0;
    while (x > 0)
    {
        int rem = x % 10;
        value += pow(rem, length);
        x = x / 10;
    }
    cout << value << endl;
    if (y == value)
    {
        cout << "The given number is armstrong number" << endl;
    }
    else
    {
        cout << "The given number is not a armstrong number" << endl;
    }
}
int main()
{
    int x;
    cout << "Enter the number: ";
    cin >> x;
    armstrong(x);
    return 0;
}