#include <bits/stdc++.h>
using namespace std;

int countDigits(int x)
{
    int count = 0;
    while (x > 0)
    {
        x = x / 10;
        count++;
    }
    return count;
}
int main()
{
    int x;
    cout << "Enter the number to count it's digit:";
    cin >> x;
    countDigits(x);
    cout << "Number of digit in " << x << " is " << countDigits(x) << endl;
    return 0;
}