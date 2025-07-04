 // Write a program to find sum of odd numbers from 1 to N
 #include<stdio.h>
 int main()
 {
    int i,n,sum=0;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i&1){
          printf("\n%d",i);
          sum+=i;
        }
    }
    printf("\nSum:%d",sum);
    return 0;
 }
