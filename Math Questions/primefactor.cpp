// Efficient Method
#include<bits/stdc++.h>
using namespace std;
void primefactor(int x){
    if(x<=1){
        return ;
    }
    for(int i=2; i*i<=x; i++){
        while(x%i==0){
            cout<<i<<" ";
            x=x/i;
        }
    }
    if(x>1){
        cout<<x<<" ";
    }
}
int main()
{
    int x,y;
    cout<<"Enter the number :";
    cin>>x;
    primefactor(x);
   return 0;
}