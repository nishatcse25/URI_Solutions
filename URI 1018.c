#include<stdio.h>
#include<math.h>
int main()
{
    int a,x1,x2,x3,x4,x5,x6,x7,N,m,y1,y2,y3,y4,y5,y6,y7;
    scanf("%d",&a);
    printf("%d\n",a);
    x1=a/100;
    y1=a%100;
    printf("%.1d nota(s) de R$ 100,00\n",x1);
     x2=y1/50;
     y2=y1%50;
     printf("%.1d nota(s) de R$ 50,00\n",x2);
        x3=y2/20;
        y3=y2%20;
      printf("%.1d nota(s) de R$ 20,00\n",x3);
       x4=y3/10;
       y4=y3%10;
       printf("%.1d nota(s) de R$ 10,00\n",x4);
        x5=y4/5;
        y5=y4%5;
        printf("%.1d nota(s) de R$ 5,00\n",x5);
         x6=y5/2;
         y6=y5%2;
         printf("%.1d nota(s) de R$ 2,00\n",x6);
          x7=y6/1;
          y7=y6%1;
          printf("%.1d nota(s) de R$ 1,00\n",x7);
    return 0;
}