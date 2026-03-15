#include<stdio.h>
#include<conio.h>

int main (){
    printf("Name : Ankit Raj\n");
    printf("Branch : ECE\n");
    printf("Roll no : 25EC11\n");

    int a,b,c,temp;
    printf("Enter Three Number\n");
    scanf("%d%d%d",&a, &b, &c);

    if(a>=b && a>=c){
    printf("Biggest Number is %d \n", a);
    }
    else if(b>=a && b>=c){
    printf("Biggest Number is %d \n", b);
    }
    else{
        printf("Biggest Number is %d \n", c);
    }


    if (a > b) { temp = a; a = b; b = temp; }
    if (a > c) { temp = a; a = c; c = temp; }
    if (b > c) { temp = b; b = c; c = temp; }
    printf("Numbers in increasing order: %d %d %d\n", a, b, c);
    
    getch();
}