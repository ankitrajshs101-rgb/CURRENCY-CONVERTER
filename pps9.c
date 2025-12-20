#include<stdio.h>
#include<conio.h>

void main(){
    printf("Name : Ankit Raj\n");
    printf("Branch : ECE\n");
    printf("Roll no : 25EC11\n");
   
    char ch;
    printf("Enter Any Character");
    scanf("%c", &ch);

    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){
         printf("It is Alphabet");
    }
    else if(ch>='0' && ch<='9'){
         printf("It is Digit");
    }
    else{
        printf("It is Symbol");
    }
    

    getch();
}