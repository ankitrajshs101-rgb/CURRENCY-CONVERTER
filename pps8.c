#include<stdio.h>
#include<conio.h>

void main(){
    printf("Name : Ankit Raj\n");
    printf("Branch : ECE\n");
    printf("Roll no : 25EC11\n");
   
    char ch;
    float present_reading,past_reading,bill,unit,gst;
    
    printf("Enter present_reading:");
    scanf("%f",&present_reading);
    printf("Enter past_reading:");
    scanf("%f",&past_reading);

    unit=present_reading-past_reading;
    printf("total unit:%f\n",unit);

    if(unit<=100){
        bill=unit*4;
    }
    else if(unit>100 && unit<=200){
        bill=100*4 + (unit -100)*5 ;
    }
    else if(unit>200 && unit<=300){
        bill=100*4 + 100*5 + (unit-200)*6;
    }
    else{
        bill=100*4 + 100*5 + 100*6 + (unit-300)*8;
    }
    gst= bill+bill*0.18;
    printf("electricity bill is = %f\n", bill);
    printf("net payble amount with gst= %f",gst);

     
    getch();
}