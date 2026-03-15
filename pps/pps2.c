#include<stdio.h>
#include<conio.h>

void main(){
    printf("Name : Ankit Raj\n");
    printf("Branch : ECE\n");
    printf("Roll no : 25EC11\n");
   
    int a,b;
    printf("Enter Two Number\n");
    scanf("%d%d",&a, &b);
    

    if(a>b){
        printf("%d is greater than %d\n", a,b);
    }
    else if(a<b){
        printf("%d is less than %d\n", a,b);
    }
    else{
        printf("%d is equal to %d\n", a,b);
    }
 
    
    getch();
}