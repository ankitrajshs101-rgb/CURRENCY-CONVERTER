#include<stdio.h>
#include<conio.h>

void main (){ 
    printf("Name : Ankit Raj\n");
    printf("Branch : ECE\n");
    printf("Roll no : 25EC11\n");

    int n, i;
    float amount, total, discount, net_amount,additional_discount,payble_amount,gst;

     printf("Enter number of products: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Enter amount of product %d: ", i);
        scanf("%f", &amount);
        total += amount;
    }
    if(total<4000)
    discount = (total*0.08);
    if(total>= 4000 && total<8000)
    discount = (total*0.1);
    if(total >= 8000 && total<12000)
    discount = (total*0.12);
    if(total>= 12000)
    discount = (total*0.15);

    net_amount = total - discount;

    if (net_amount > 7000){
        additional_discount = net_amount*0.05 ;
        net_amount = net_amount - additional_discount ;
    }
    gst=net_amount + 0.18*net_amount;
    printf("\nTotal amount: %.2f", total);
    printf("\ndiscount: %.2f", discount);
    printf("\naddtional discount: %.2f", additional_discount);
    printf("\nNet amount: %.2f", net_amount);
    printf("\nNet payble amount with gst= %.2f", gst);

    getch();
}