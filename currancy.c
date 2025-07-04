// A cashier has currency notes of denomination 1, 5 and 10. Accept the amount to be withdrawn from the user and print the total number of currency notes of each denomination the cashier will have to give.

#include<stdio.h>
int main()
{
    int amount ,ten,five,one;
    printf("Enter a Amount");
    scanf("%d",&amount);
    ten=amount/10;
    amount=amount%10;
    five=amount/5;
    amount=amount%5;
    one=amount;
    printf("Currancy notes:\n");
    printf("10s :%d\n",ten);
    printf("5s  :%d\n",five);
    printf("1s  :%d\n",one);
    return 0;
}