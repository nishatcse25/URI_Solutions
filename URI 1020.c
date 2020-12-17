#include<stdio.h>
#include<math.h>
int main()
{
    int a,x,y,z,s,n,e,s1,z1;
    scanf("%d",&a);
    n=a/365;
    x=a%365;
    s1=x/30;
    s=x%30;
    printf("%d ano(s)\n",n);
    printf("%d mes(es)\n",s1);
    printf("%d dia(s)\n",s);
    return 0;
}