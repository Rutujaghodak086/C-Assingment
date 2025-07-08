
// Accept the time as hour, minute and seconds and check whether the time is valid. (Hint:0<=hour<24, 0<=minute <60, 0<=second <60) (3 logics)

#include<stdio.h>
int main()
{
    int h,m,s;
    printf("Enter a Hours");
    scanf("%d",&h);
    printf("Enter Minutes");
    scanf("%d",&m);
    printf("Enter secound");
    scanf("%d",&s);
    if(h>=0 && h<24)
    {
        if(m>=0 && m<60)
        {
            if(s>=0 && s<60)
              printf("Time is Valid");
            else
              printf("Secound are Invalid");
        }
        else
          printf("Minutes are Invalid");
    }
    else
      printf("Houres are Invalid");
      return 0;
}