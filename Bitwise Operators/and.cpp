#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter the first number: ";
    cin>>x;
    cout<<"Enter the second number: ";
    cin>>y;
    int z=(x&y);
    cout<<"The result after the and operation is: "<<z<<endl;
   return 0;
}

// Binary method of solving this is
// x  y   ^
// 0  0   0
// 0  1   0
// 1  0   0
// 1  1   1