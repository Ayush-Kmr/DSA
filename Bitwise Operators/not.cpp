#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout << "Enter the number: ";
    cin >> x;
    cout << "The result after the not operation is: " << (~x) << endl;
    return 0;
}

// Solution Method
if x=+ve, then ans=-*(x+1)
if x=-ve, then ans=-*(x)-(1)