// Write a program that accepts a number and print it’s all digits.

#include<stdio.h>
int main()
{
    int number,digit,res=0,temp;
    printf("Enter a Number");
    scanf("%d",&number);
    printf("Digit");
    if(number<0){
        number=-number;
        printf("-");
    }
    temp=number;
    while (temp>0)
    {
      res=res*10+temp%10;
      temp/=10;
    }
    while (res>0)
    {
        digit=res%10;
        printf(" %d ",digit);
        res/=10;
    }
   return 0; 
    
}