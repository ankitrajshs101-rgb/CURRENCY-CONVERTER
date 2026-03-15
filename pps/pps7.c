#include<stdio.h>
#include<conio.h>

int main (){
    printf("Name : Ankit Raj\n");
    printf("Branch : ECE\n");
    printf("Roll no : 25EC11\n");

    int a,b,sum,sub,mul;
    float div;
    printf("Enter Two Number");
    scanf("%d%d", &a,&b);

    if(a%2==0 && b%2==0){
        sum=a+b;
        printf("%d",sum );
    }
    else if(a%2==0 && b%2!=0){
        sub=a-b;
        printf("%d",sub);
    }
    else if(a%2!=0 && b%2==0){
        mul=a*b;
        printf("%d",mul);
    }
    
        else if
        (b!=0){
        div=(float)a/b;
        printf("%f",div);

        
    }
    else{
            printf("undefine");
        }


   
    getch();
}