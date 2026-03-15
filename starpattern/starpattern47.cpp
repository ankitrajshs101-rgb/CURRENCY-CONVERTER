#include<iostream>
using namespace std;

int main(){
    int i,j;
    for(i=1; i<=8 ; i++){
        for(j=1; j<=8; j++){
            if(j==8 || j==1 || i==j ) 
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