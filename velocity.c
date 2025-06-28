// Accept initial velocity (u), acceleration (a) and time (t). Print the final velocity (v) and the distance (s) travelled.

#include<stdio.h>
int main()
{
    float u,a,t,v,s;
    printf("Initial Velocity");
    scanf("%f",&u);
    printf("Acceleration");
    scanf("%f",&a);
    printf("Time");
    scanf("%f",&t);
    v=u+a*t;
    s=u*t+(1/2)*a*t*t;
    printf("Velocity %.2f\n",v);
    printf("Distans %.2f",s);
    return 0;
}