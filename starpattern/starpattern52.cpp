#include<iostream>
using namespace std;

int main(){
    int i,j;
    for(i=1; i<=5 ; i++){
        for(j=1; j<=5; j++){
            if(i==5 || j==1 || i==j ) 
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    
    return 0;
}