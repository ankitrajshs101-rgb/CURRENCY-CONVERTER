#include<iostream>
using namespace std;

int main(){
    int a,b,hcf,r;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;
    while(true)
    {
        hcf=b;
        r=a%b;
        a=b;
        b=r;
        if(b==0)
        {
            break;
        }
    }
    cout<<"HCF is"<<hcf;
    return 0;
}