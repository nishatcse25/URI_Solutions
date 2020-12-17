#include<stdio.h>
#include<math.h>
int main ()
{
    float A,B,C,x,sum,sum1;
    scanf("%f%f%f",&A,&B,&C);
    x=(B*B-4*A*C);
    if (A==0)
      {

       printf("Impossivel calcular\n");
      }
else if (x<0)
       {

        printf("Impossivel calcular\n");
    }
    else
    {
      sum=(-B+sqrt(x))/(2*A);
      sum1=(-B-sqrt(x))/(2*A);
      printf("R1 = %.5f\n",sum);
      printf("R2 = %.5f\n",sum1);
      return 0;
    }
}
