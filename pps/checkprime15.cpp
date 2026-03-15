#include<iostream>
using namespace std;

int main(){
    int i,n;
    cout<<"enter a number"<<endl;
    cin>>n;
    for(i=2;i<n;i++){
        if(n%i==0){
        cout<<"Not a prime number"<<endl;
        break;
        }
    }
    if(i==n)
    {
        cout<<"it is a prime number"<<endl;
    }
    return 0;
}