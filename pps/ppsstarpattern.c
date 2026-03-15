#include<stdio.h>
#include<conio.h>

void main(){
    int limit,s,i,j,k;

    printf("Enter the limit");
    scanf("%d",&limit);

    printf("enter space");
    scanf("%d",&s);
    
    if(s>=limit){
        for(i=1; i<=limit; i++){
            for(k=1; k<=s; k++){
        
                printf(" ");
            }
            for(j=1; j<=2*i-1; j++){
                printf("*");
            }
            s--;
            printf("\n");
        
    }
    }
s=s+2;
for(i=limit-1; i>=1; i++){
    for(k=1; k<=s; k++)
    printf(" ");
    for(j=1; j<=2*i-1; j++){
        printf("*");
    }
    s++;
    printf("\n");
}

    getch();
}