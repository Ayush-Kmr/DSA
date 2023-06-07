#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout << "Enter the number:";
    cin >> x;
    int c = 0;
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            c++;
            break;
        }
    }
    if (c > 0)
    {
        cout << "Number is not prime" << endl;
    }
    else
    {
        cout << "Number is prime" << endl;
    }

    return 0;
}