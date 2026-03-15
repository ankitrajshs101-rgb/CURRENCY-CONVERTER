#include<conio.h>
#include<stdio.h>

void main(){
    int array1[]={5,9,17,13,18};
    int array2[]={12,27,35,47,57};
    int array3[5];
    int size=5;

    for(int i=0; i<size; i++){
        array3[i] = array1[i] + array2[i];
    }

    printf("Sum of array1 and array2:\n");
    for(int i=0; i<size; i++){
        printf("array3[%d] = %d\n", i, array3[i]);
    }

    getch();
}