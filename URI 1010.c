#include<stdio.h>
int main()
{
    float a,b,c,d,e,f,X;
    scanf("%f %f %f",&a,&b,&c);
    scanf("%f %f %f",&d,&e,&f);
    X=(b*c)+(e*f);
    printf("VALOR A PAGAR: R$ %.2f\n",X);
    return 0;
}