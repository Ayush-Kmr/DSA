#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter the number x: ";
    cin>>x;
    cout<<"Enter the number y: ";
    cin>>y;
    int z=x|y;
    cout<<"The result after the or operation is :"<<z<<endl;
   return 0;
}

// Binary method of solving this is
// x  y   ^
// 0  0   0
// 0  1   1
// 1  0   1
// 1  1   1