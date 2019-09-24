#include <math.h>
#include <stdio.h>

int main()
{
    float a, b, c, x1, x2, delta, raiz_delta;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    delta = (pow(b, 2) - 4*a*c);
    x1 = (-b + sqrt(delta))/(2*a);
    x2 = (-b - sqrt(delta))/(2*a);

    if(delta >= 0)
    {
        if(delta == 0)
        {
            printf("\nA raiz x1 = %lf", x1);
        }

        else
        {
            printf("\nA raiz x1 = %lf", x1);
            printf("\nA raiz x2 = %lf", x2);
        }
    }

    else
    {
        delta = fabs(delta);
        raiz_delta = sqrt(delta);

        printf("\nA raiz x1 = %f + %fi", ((-b)/(2*a)), ((raiz_delta)/(2*a)));
        printf("\nA raiz x2 = %f - %fi", ((-b)/(2*a)), ((raiz_delta)/(2*a)));
    }

    return(0);
}