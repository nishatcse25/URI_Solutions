#include<stdio.h>
#include<math.h>
int main()
{
    float A,B,C,p,q;
    scanf("%f%f%f",&A,&B,&C);
    p=A+B+C;
    q=((A+B)*C)/2;
    if(A+B>C && A+C>B && B+C>A){
        printf("Perimetro = %.1f\n",p);}
        else {
            printf("Area = %.1f\n",q);}
        return 0;
}

