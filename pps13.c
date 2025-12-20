#include<stdio.h>
#include<conio.h>

void main(){
    printf("Name : Ankit raj\n");
    printf("Branch : ECE\n");
    printf("Roll no : 25EC11\n");
   
    char ch;  
    printf("Enter character\n");
    scanf("%c",&ch);

    if((ch>= 'A' && ch<'Z') || (ch>= 'a' && ch<'z')) {
        ch=ch+1;
        printf("%c", ch);
    }
    else if(ch=='Z'){
        ch='A';
        printf("%c",ch);
    }
    else if (ch=='z'){
        ch='a';
        printf("%c",ch);
    }
        
    getch();
}