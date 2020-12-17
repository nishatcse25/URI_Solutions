#include<stdio.h>
#include<math.h>
int main()
{
     double x;
     int x1,x2,x3,x4,x5,x6,x7,
     x8,x9,x10,x11,x12,n;
      scanf("%lf",&x);
      n  =x*100;
      x1 =n/10000;
      n  =n%10000;
      x2 =n/5000;
      n  =n%5000;
      x3 =n/2000;
      n  =n%2000;
      x4 =n/1000;
      n  =n%1000;
      x5 =n/500;
      n  =n%500;
      x6 =n/200;
      n  =n%200;
      x7 =n/100;
      n  =n%100;
      x8 =n/50;
      n  =n%50;
      x9 =n/25;
      n  =n%25;
      x10=n/10;
      n  =n%10;
      x11=n/5;
      n  =n%5;
      x12=n/1;
      n =n%1;

       printf("NOTAS:\n");
       printf("%d nota(s) de R$ 100.00\n",x1);
       printf("%d nota(s) de R$ 50.00\n",x2);
       printf("%d nota(s) de R$ 20.00\n",x3);
       printf("%d nota(s) de R$ 10.00\n",x4);
       printf("%d nota(s) de R$ 5.00\n",x5);
       printf("%d nota(s) de R$ 2.00\n",x6);
      printf("MOEDAS:\n");
       printf("%d moeda(s) de R$ 1.00\n",x7);
        printf("%d moeda(s) de R$ 0.50\n",x8);
         printf("%d moeda(s) de R$ 0.25\n",x9);
          printf("%d moeda(s) de R$ 0.10\n",x10);
           printf("%d moeda(s) de R$ 0.05\n",x11);
            printf("%d moeda(s) de R$ 0.01\n",x12);
            return 0;
}
