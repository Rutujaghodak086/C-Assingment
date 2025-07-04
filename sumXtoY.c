// Write a program to find sum of x to y (both inclusive)
 #include<stdio.h>
 int main()
 {
    int x,y,i,sum=0;
    printf("Enter X and Y(x<y):");
    if(scanf("%d %d",&x,&y)!=2)
    {
        printf("Invalid\n");
        return 1;
    }
    if(x>y){
        printf("X is less than y");
        return 1;
    }
    for(i=x;i<=y;i++){
        printf("%d",i);
        for(i=x;i<=y;i++){
            sum+=i;
        }
    }
    printf("Sum of X and Y :%d",sum);
    return 0;
 }