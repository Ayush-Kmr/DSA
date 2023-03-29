// Program to print sum of all even number in the given range.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int i=1;
    int sum=0;
    while(i<=n){
        if(i%2==0){
        sum=sum+i;
        }
        i=i+1;
    }
    cout<<sum<<endl;
   return 0;
}