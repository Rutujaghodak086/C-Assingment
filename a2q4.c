// Accept the cost price and selling price from the keyboard. Find out if the seller has made a profit or loss and display how much profit or loss has been made?

#include<stdio.h>
int main()
{
    int cp,sp,p,l;
    printf("Enter a Cost Price");
    scanf("%d",&cp);
    printf("Enter a selling Price");
    scanf("%d",&sp);
    if(sp>cp)
    {
        printf("Profit is %d",(sp-cp));

    }
    else if(cp>sp)
    {
        printf("Loss is %d",(cp-sp));
    }
    else
    printf("No profit Loss");
    return 0;
}