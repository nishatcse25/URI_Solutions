#include<stdio.h>
int main()
{
    double A,B,C,pi=3.14159,a,X,cir,tra,qua,ret;
    scanf("%lf %lf %lf",&A,&B,&C);
    X=.5 *A*C;
    printf("TRIANGULO: %.3lf\n",X);
    cir=pi*(C*C);
    printf("CIRCULO: %.3lf\n",cir);
    tra=((A+B)/2)*C;
    printf("TRAPEZIO: %.3lf\n",tra);
    qua=(B*B);
    printf("QUADRADO: %.3lf\n",qua);
    ret=A*B;
    printf("RETANGULO: %.3lf\n",ret);
    //pi=
    return 0;
}