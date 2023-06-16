// Naive Method
#include<bits/stdc++.h>
using namespace std;
void printDivisors(int x){
    for(int i=1; i<=x; i++){
        if(x%i==0){
            cout<<i<<" ";
        }
    }
}
int main()
{
    int x;
    cout<<"Enter the number :";
    cin>>x;
    printDivisors(x);
   return 0;
}

//Efficient Method
#include<bits/stdc++.h>
using namespace std;
void printDivisors(int x){
    for(int i=1; i*i<=x; i++){
        if(x%i==0){
            cout<<i<<" ";
            if(i!=x/i){
                cout<<(x/i)<<" ";
            }
        }
    }
}
int main()
{
    int x;
    cout<<"Enter the number:";
    cin>>x;
    printDivisors(x);
   return 0;
} 