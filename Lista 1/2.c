//RECEBER DOS VALORES E IMPRIMIR TODOS OS IMPARES

#include <stdio.h>

int main(){

    int X, Y, impar = 0;

    printf("Vamos imprimir os valores Impares.\n");

    printf("Informe o valor de X e Y respectivamente: ");
    scanf("%d%d", &X, &Y);

    for(X = X; X <= Y; X++){
        impar = X % 2;

        if(impar != 0)
            printf("%d,", X);


    }

    return 0;
}
