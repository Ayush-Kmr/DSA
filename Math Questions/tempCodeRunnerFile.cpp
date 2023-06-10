#include<bits/stdc++.h>
using namespace std;
int fact(int x){
    if(x==0){
        return 1
    }
    else {
        return x*fact(x-1);
    }
}
int main()
{
    int x;
    cout<"Enter the number:";
    cin>>x;
    fact(x);
    cout<<"Factorial of a given number "<< x <<" is"<<fact(x);
   return 0;
}
