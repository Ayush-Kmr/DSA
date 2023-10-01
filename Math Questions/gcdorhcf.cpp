// Naive Method
#include <bits/stdc++.h>
using namespace std;
int gcd(int x, int y)
{
    int res = min(x, y);
    while (res > 0)
    {
        if (x % res == 0 && y % res == 0)
        {
            break;
        }
        else
        {
            res--;
        }
    }
    return res;
}
int main()
{
    int x, y;
    cout << "Enter the number x: ";
    cin >> x;
    cout << "Enter the number y: ";
    cin >> y;

    int z = gcd(x, y);
    cout << "GCD or HCF of the given two number is :" << z << endl;
    return 0;
}

// Efficient Method using Euclidean Algorithm
#include <bits/stdc++.h>
using namespace std;
int gcd(int x, int y)
{
    while (x != y)
    {
        if (x > y)
        {
            x = x - y;
        }
        else
        {
            y = y - x;
        }
    }
    return x;
}
int main()
{
    int x, y;
    cout << "Enter the number x :";
    cin >> x;
    cout << "Enter the number y :";
    cin >> y;

    int z = gcd(x, y);
    cout << "GCD or HCF of given two number is : " << z << endl;
    return 0;
}

// Optimized Eucledian Algorithm Efficient Solution
#include <bits/stdc++.h>
using namespace std;
int gcd(int x, int y)
{
    if (y == 0)
    {
        return x;
    }
    else
    {
        return gcd(y, x % y);
    }
}
int main()
{
    int x, y;
    cout << "Enter the number x :";
    cin >> x;
    cout << "Enter the number y :";
    cin >> y;
    int z = gcd(x, y);
    cout << "GCD or HCF of the given number is :" << z << endl;
    return 0;
}