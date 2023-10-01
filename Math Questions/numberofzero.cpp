#include <bits/stdc++.h>
using namespace std;
int countZero(int x)
{

    int count = 0;
    while (x > 0)
    {
        if (x % 10 == 0)
        {
            count++;
        }
        x = x / 10;
    }
    return count;
}
int main()
{
    int x;
    cout << "Enter the number";
    cin >> x;
    countZero(x);
    cout << "Number of zeros in given number " << x << " is " << countZero(x) << endl;
    return 0;
}