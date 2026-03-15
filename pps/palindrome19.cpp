#include<iostream>
using namespace std;

int main(){
    int n,r,sum=0,t;
    cout<<"enter a number"<<endl;
    cin>>n;
    t=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if(t==sum)
    {
        cout<<"palidrome number"<<endl;
    }
    else{
        cout<<"not a palidrome number"<<endl;
    }
    return 0;
}