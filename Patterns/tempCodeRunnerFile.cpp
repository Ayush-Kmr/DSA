#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the number:";
    cin>>x;
    int i=1;
    while(i<=x){
        int space=i-1;
        while(space){
            cout<<" ";
            space=space-1;
        }
        int j=1;
        while(j<=(x-i+1)){
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
   return 0;
}