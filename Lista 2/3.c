#include <stdio.h>

#define qtdElem 10

int main(int argc, char const *argv[])
{
    double v[qtdElem];
    double va[qtdElem];

    printf("Digite 10 valores: \n(Separados por space ou enter)\n");

    for (int i = 0; i < qtdElem; i++) //lê os elementos
    {
        scanf("%lf", &v[i]);
    }

    for (int i = 0; i < qtdElem; i++) //arredonda os elementos, usando o principio do round();
    {
        if (v[i] < 0)
        {
            va[i] = (int)(v[i] - 0.5); 
        }
        else
        {
            va[i] = (int)(v[i] + 0.5);
        }
    }

    printf("Vetor arredondado: \n");

    for (int i = 0; i < qtdElem; i++) //printa o vetor já arredondado;
    {
        printf("%.2f  ", va[i]);
    }

    return 0;
}