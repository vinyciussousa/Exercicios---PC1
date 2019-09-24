//RECEBA N VALORES E CALCULE A MEDIA

#include<stdio.h>

int main()
{
    float soma, a, media;
    int i, N;

    printf("Quantos numeros para o laco: "); //INFORME QUANTOS NUMEROS QUER INTRODUZIR
    scanf("%d", &N);

    soma = 0;

    for(i = 1; i <= N; i++){ //VAI RODAR E GUARDAR EM SOMA OS NUMEROS QUE
                             //QUE DESEJA CALCULAR A MEDIA
        printf("Informe um numero: ");
        scanf("%f", &a);

        soma = soma + a;

    }

    media = soma / N;



    printf("A meida é: %f", media);





}
