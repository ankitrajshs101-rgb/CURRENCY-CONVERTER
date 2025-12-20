#include<stdio.h>
#include<conio.h>

void main(){
    printf("Name : Ankit Raj\n");
    printf("Branch : ECE\n");
    printf("Roll no : 25EC11\n");
   

char ch;
printf("Enter character");
scanf("%c",&ch);

if(ch>='A' && ch<='Z'){
	ch=ch+32;
	printf("%c",ch);
}
else if(ch>='a' && ch<='z'){
	ch=ch-32;
	printf("%c",ch);
}
    
    getch();
}