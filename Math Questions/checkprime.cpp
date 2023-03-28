// Program to check whether a given number is prime or not using for loop.
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



//     //  Using while loop to check the prime for which number the given number is prime.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout << "Enter the number:";
    cin >> x;
    int i = 2;
    while (i < x)
    {
        if (x % i == 0)
        {
            cout << "Not prime for" << i << endl;
        }
        else
        {
            cout << "Prime for" << i << endl;
        }
        i = i + 1;
    }
    return 0;
}