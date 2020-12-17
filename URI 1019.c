#include<stdio.h>
#include<math.h>
int main()
{
 int N,x,y,z,s,H;
 scanf("%d",&N);
 x=N/3600;
 N=N%3600;
 y=N/60;
 s=N%60;
 printf("%d:%d:%d\n",x,y,s);
 return 0;
}