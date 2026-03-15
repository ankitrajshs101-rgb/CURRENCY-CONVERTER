#include<stdio.h>
#include<conio.h>

void main(){
    printf("Name : Ankit Raj\n");
    printf("Branch : ECE\n");
    printf("Roll no : 25EC11\n");
   

    int n;
    char ch; 
     
    printf("enter character: ");
    scanf(" %c",&ch);
    if (ch>='A' && ch<='Z' ){
        printf(" %c\n",'Z'-(ch-'A'));    
    }
    else if (ch>='a'&& ch<='z'){
    printf(" %c\n",'z'-(ch-'a'));  }
 

    getch();}