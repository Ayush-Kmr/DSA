// Naive Method
#include<bits/stdc++.h>
using namespace std;
int countZero(int x){
    int fact=1;
    for(int i=2; i<=x; i++){
        fact=fact*i;
    }
    int count=0;
    while (fact%10==0)
    {
        count++;
        fact=fact/10;
    }
    return count;    
}
int main()
{
    int x;
    cout<<"Enter the number";
    cin>>x;
    countZero(x);
    cout<<"Trailing zeros in given number "<<x<<" is "<<countZero(x)<<endl;
   return 0;
}


// Efficient Method that works for any number
#include<bits/stdc++.h>
using namespace std;
int countZero(int x){
    int count=0;
    for(int i=5; i<=x; i=i*5){
        count=count+(x/i);
    }
    return count;
}
int main()
{
    int x;
    cout<<"Enter the number :";
    cin>>x;
    countZero(x);
    cout<<"Trailing zeros in the given number "<<x<<" is "<<countZero(x)<<endl;
   return 0;
}