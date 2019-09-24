#include <stdio.h>
#include <math.h>

#define qtdElem 10

int main(int argc, char const *argv[])
{
    float v[qtdElem];
    float soma;
    float media;
    float somav;
    float variancia;
    float desvioPadrao;

    printf("Digite 10 valores: \n(Separados por space ou enter)\n");

    for (int i = 0; i < qtdElem; i++) //lê os elementos
    {
        scanf("%f", &v[i]);
    }
    
    for (int i = 0; i < qtdElem; i++) //calcula a soma de todos os elementos, e depois a media
    {
        soma = soma + v[i];
    }

    media = soma/qtdElem;

    for (int i = 0; i < qtdElem; i++) //calcula o somatorio dos elementos menos a media ao quadrado, e depois a variancia
    {
        somav += pow(v[i] - media, 2);
    }

    variancia = somav / qtdElem;
    
    desvioPadrao = sqrt(variancia); //calcula a variancia 

    printf("A media dos valores e: %f\n", media);
    printf("A variancia dos valores e: %f\n", variancia);
    printf("O desvio padrao dos valores e: %f\n", desvioPadrao);

    return 0;
}