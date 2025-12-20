#include<stdio.h>
#include<conio.h>


int main(){
    printf("Name : Ankit Raj\n");
    printf("Branch : ECE\n");
    printf("Roll no : 25EC11\n");

    int n, i;
    float amount, total, discount, net_amount,additional_discount,gst;

    printf("enter number of products: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("Enter amount of product %d: ", i);
        scanf("%f", &amount);
        total += amount;
    }
    if(total<5000)
    discount = (total*0.05);
    if(total>= 5000)
    discount = (total*0.08);
    net_amount = total - discount;
    printf("\nTotal amount: %f", total);
    printf("\ndiscount: %f", discount);
    gst =net_amount*0.18 + net_amount;
    printf("\nNet Payable amount with gst: %f", gst);

    
    getch();
}