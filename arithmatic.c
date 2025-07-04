// Accept two numbers and print arithmetic and harmonic mean of the two numbers
#include<stdio.h>
int main()
{
    int a,b,AM,HM;
    printf("ENter two number");
    scanf("%d%d",&a,&b);
    AM=(a+b)/2;
    HM=2*a*b/(a+b);
    printf("AM %d\n",AM);
    printf("HM %d",HM);
    return 0;
}