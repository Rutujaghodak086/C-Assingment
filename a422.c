// Write a program that accepts a number and count the number of digits in given number.
#include<stdio.h>
int main()
{
    int n,count=0,digit,temp;
    printf("Enter a number");
    scanf("%d",&n);
    printf("digit");
    if(n<0)
    {
        n=-n;
        printf("-");
    }
  if(n==0){
count=1;
  }else{
    while(n!=0){
        n=n/10;
        count++;
    }
  }
  printf("total count of digit %d\n",count);
  return 0;
    
}