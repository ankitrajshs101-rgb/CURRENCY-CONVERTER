#include<stdio.h>
#include<conio.h>

int main (){
    printf("Name : Ankit Raj\n");
    printf("Branch : ECE\n");
    printf("Roll no : 25EC11\n");


        int n;
        printf("Enter a year");
        scanf("%d",&n);

        if(n%4==0 && n%100!=0 || n%400==0){
            printf("%d is a leap year",n);
        }
        else{
            printf("%d is not a leap year",n);
        }
    
   
    getch();
}