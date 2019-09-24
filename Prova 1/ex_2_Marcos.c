#include <stdio.h>

#define MAX 10

int main(int argc, char const *argv[])
{
    float v[MAX];
    float media = 0.0;
    float soma = 0.0;
    int qtdMaior = 0;
    int qtdMenor = 0;
    int A = 0, B = 0;
    float vMa[MAX];
    float vMe[MAX];

    for (int i = 0; i < MAX; i++)
    {
        scanf("%f", &v[i]);
    }

    for (int i = 0; i < MAX; i++)
    {
        soma += v[i];
    }

    media = soma / MAX;

    for (int i = 0; i < MAX; i++)
    {
        if (v[i] > media)
        {
            vMa[A] = v[i];
            qtdMaior++;
            A++;
        }
        if (v[i] < media)
        {
            vMe[B] = v[i];
            qtdMenor++;
            B++;
        }
    }

    printf("Media: %.2f\n", media);

    printf("%i elementos menores que a média: ", qtdMenor);
    for (int i = 0; i < qtdMenor; i++)
    {
        printf("%.2f ", vMe[i]);
    }

    printf("\n");

    printf("%i elementos maiores que a média: ", qtdMaior);
    for (int i = 0; i < qtdMaior; i++)
    {
        printf("%.2f ", vMa[i]);
    }

    printf("\n");

    return 0;
}
