#include<iostream>
using namespace std;

int main(){
    int i,j;
    for(i=1; i<=5 ; i++){
        for(j=1; j<=9; j++){
            if(i==j || j==i+1 || j==i+2 || j==i+3 || j==i+4 ) 
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