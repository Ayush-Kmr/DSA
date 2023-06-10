#include<bits/stdc++.h>
using namespace std;
int isPal(int x){
    int temp=x;
    int rev=0;
    while(temp!=0){
        int ld=temp%10;
        rev=rev*10+ld;
        temp=temp/10;
    }
    if(rev==x){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
int main()
{
    int x;
    cout<<"Enter the number:";
    cin>>x;
    isPal(x);
   return 0;
}