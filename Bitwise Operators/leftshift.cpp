#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter the number you want to shift: ";
    cin>>x;
    cout<<"Enter the number of shift you wish: ";
    cin>>y;
    cout<<(x<<y)<<endl;
   return 0;
}

// // Formula
// leftshift= (2^no. of shift) * (number)