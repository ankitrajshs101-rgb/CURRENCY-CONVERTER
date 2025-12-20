#include <stdio.h>
#include <conio.h>

void main() {
    int limit, s, i, j, k;
    int space;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    printf("Enter initial space: ");
    scanf("%d", &s);

    space = s;

    
    for(i = 1; i <= limit; i++) {
        for(k = 1; k <= space; k++) {
            printf(" ");
        }
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        space--;
        printf("\n");
    }

    space = space + 2; 
    for(i = limit - 1; i >= 1; i--) {
        for(k = 1; k <= space; k++) {
            printf(" ");
        }
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        space++;
        printf("\n");
    }

    getch();
}