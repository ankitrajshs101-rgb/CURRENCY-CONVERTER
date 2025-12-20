#include<stdio.h>
#include<conio.h>

void main(){
    printf("Name : Ankit Raj\n");
    printf("Branch : ECE\n");
    printf("Roll no : 25EC11\n"); 

    int n;
    printf("Enter a number\n");
    scanf("%d",&n);

    if(n%2==0){
        printf("Even Number");
    }
    else{
        printf("Odd Number");
    }

    
    getch();
}