// Naive Method
#include<bits/stdc++.h>
using namespace std;
int lcm(int x,int y){
    int res=max(x,y);
    while(true){
        if(res%x==0 && res%y==0){
            return res;
    }
    else{
        res++;
    }
}
}
int main()
{
    int x,y;
    cout<<"Enter the number x :";
    cin>>x;
    cout<<"Enter the number y :";
    cin>>y;
    lcm(x,y);
    cout<<"LCM of the given two number is : "<<lcm(x,y)<<endl;
   return 0;
}


// Efficient Method
#include<bits/stdc++.h>
using namespace std;
int gcd(int x,int y){
    if(y==0){
        return x;
    }
    else {
        return gcd(y,x%y);
    }
}
int lcm(int x,int y){
    return (x*y)/gcd(x,y);
}
int main()
{
    int x,y;
    cout<<"Enter the number x: ";
    cin>>x;
    cout<<"Enter the number y: ";
    cin>>y;
    gcd(x,y);
    lcm(x,y);
    cout<<"LCM of the given two number is: "<<lcm(x,y)<<endl;
   return 0;
}