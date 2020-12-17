#include<stdio.h>
int main()
{
    double pi=3.14159,R,sum;
    scanf("%lf",&R);
    sum=((4/3.0)*pi*(R*R*R));
    printf("VOLUME = %.3lf\n",sum);
    return 0;
}