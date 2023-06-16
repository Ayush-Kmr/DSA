// Naive Method
#include<bits/stdc++.h>
using namespace std;
int power(int x,int n){
    int res=1;
    for(int i=0; i<n; i++){
        res=res*x;
    }
    return res;
}
int main()
{
    int x,n;
    cout<<"Enter the number x:";
    cin>>x;
    cout<<"Enter the power digit:";
    cin>>n;
    int z=power(x,n);
    cout<<"Computed Power of the given number is : "<<z<<endl;
   return 0;
}