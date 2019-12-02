#include <stdio.h>

int potencia(int x, int n)
{
    if (n == 0)
        return 1;
    else if (n == 1)
        return x;
    else if (n < 0)
        return (1/(float) x) * potencia(x,n + 1);
    else
        return x * potencia(x, n - 1);
    
    printf("Valor invalido.\n");
    return 0;
}

int main(int argc, char const *argv[])
{
    int x, n;
    printf("Digite a base: ");
    scanf("%d", &x);
    printf("Digite o expoente: ");
    scanf("%d", &n);
    printf("%d elevado a %d é igual a %f\n",x ,n ,potencia(x, n) );
    return 0;
}
