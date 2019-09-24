#include <stdio.h>
#include <math.h>
int main (void)
{
    float delta;
    float a,b,c,raiz;
    float x1,x2;
    float real;
    puts("Digite o valor de A, B e C ");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    delta = ((b*b) - (4 * (a * c)));
    real =((-b )/(2*a));
    if(delta < 0)
    {
        printf("Nenhuma raiz real, delta menor que 0\n");
        printf("Parte imaginaria: %.2f i\n",delta);
        printf("Parte Real: %.2f", real);
    }
    else if( delta == 0)
    {

        printf("Uma unica raiz real, delta igual a zero. \n ");

        x1 = ((-b )/(2*a));
        printf("x1 =  %.2f\n",x1);
    }
    else if( delta > 0)
    {
        printf("Duas raizes reais quando delta for maior que zero \n");
        printf(" X1 = %.2f\n X2 = %.2f\n",((-b + sqrt(delta)) / ( 2 * a )),((-b - sqrt(delta)) / ( 2 * a ))  );

    }

}