#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
        float a, b, c, delta, raiz_delta, X1, X2, parteReal, parteImag;
 
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
 
    delta = (pow(b,2) - 4 * a * c);
    X1 = (-b + sqrt(delta))/(2 * a);
    X2 = (-b - sqrt(delta))/ (2 * a);
 
    if (delta >= 0){
        if (delta == 0)
        {
            printf("A equação tem raiz DUPLA\n x = %f", X1);
        }
        else
        {
            printf("A equação tem raízes reais\nx1 = %.2f\nx2 = %.2f", X1, X2);
        }
    }
    else
    {
        delta = fabs(delta); //valor absoluto (sem sinal)
        raiz_delta = sqrt(delta); //raiz de delta
        parteReal = ((-b)/(2*a)); // basicamente se dividiu a formula, o -b sendo calculado aqui
        parteImag = ((raiz_delta)/(2*a)); //e a raiz de delta sendo calculada aqui
        printf("A equação tem raiz imaginaria\nParte real = %.2f\nParte imaginaria = %.2fi", parteReal, parteImag);
    }
    
}
