#include<stdio.h>
#include<conio.h>

int main(){
    
    int l, i;
    
    printf("Name : Ankit Raj \n");
    printf("roll no : 25EC11 \n");
    printf("Branch : ECE \n");
    
     printf(" enter limit: ");
    scanf("%d", &l);
        for(i=1;i<=l;i++){
            printf("%d\t", 1+ i*(i-1)*(2*i-1)/6);
}

getch();
}