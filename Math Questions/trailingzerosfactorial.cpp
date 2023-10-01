// Naive Method
#include <bits/stdc++.h>
using namespace std;
int countZero(int x)
{

    int count = 0;
    while (x % 10 == 0)
    {
        count++;
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
    cout << "Trailing zeros in given number " << x << " is " << countZero(x) << endl;
    return 0;
}

// Efficient Method that works for any factorial
#include <bits/stdc++.h>
using namespace std;
int countZero(int x)
{
    int count = 0;
    for (int i = 5; i <= x; i = i * 5)
    {
        count = count + (x / i);
    }
    return count;
}
int main()
{
    int x;
    cout << "Enter the factorial number :";
    cin >> x;
    countZero(x);
    cout << "Trailing zeros in the given factorial number " << x << " is " << countZero(x) << endl;
    return 0;
}