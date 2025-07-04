// Accept three dimensions length (l), breadth(b) and height(h) of a cuboid and print surface area and volume.

#include<stdio.h>
int main()
{
    int l,b,h,area,volume;
    printf("Enter a length");
    scanf("%d",&l);
    printf("Enter a breadth");
    scanf("%d",&b);
    printf("Enter a Height");
    scanf("%d",&h);
    area=2*(l*b+b*h+h*l);
    volume=l*b*h;
    printf("Area=%d\n",area);
    printf("volume=%d",volume);
    return 0;
}