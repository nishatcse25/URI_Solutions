#include<stdio.h>
int main()
{
    char a[9];
    float b,c,X;
    scanf("%s %f %f",&a,&b,&c);
    X=(c*15/100)+b;
    printf("TOTAL = R$ %.2f\n",X);
    return 0;


}