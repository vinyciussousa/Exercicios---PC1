//ARVORE DE DECISAO

#include<stdio.h>
#include <stdlib.h>
int main()
{
    int Ensolarado, Nublado, Chuvoso, Alta, Normal, Baixa, Forte, Fraco;

    printf("O CLIMA ESTA BOM PARA JOGAR TENIS??\n\n");

    printf("CARATERISTICA DO CLIMA:\n");

    printf("Informe a caracteristica do clima conforme segue abaixo:");

    printf("\nEsta ensolarado? ");
    scanf("%d", &Ensolarado);
    if(Ensolarado){
        Nublado = 0;
        Chuvoso = 0;

        printf("Vamos verifiar o nível da umidade: \n");
        printf("Informe o nível da umidade conforme segue abaixo:\n");


        printf("Alta\n");
        scanf("%d", &Alta);
          if(Alta){
            Normal=0;
            Baixa=0;
            printf(" Entao nao vamos jogar ");
          }
          printf("Normal: ");
          scanf("%d", &Normal);
          if(Normal){
            Baixa=0;

            printf("Entao vamos jogar");
          }
          else{
            Baixa=1;
            printf("Entao nao vamos jogar");
          }

    }
     if(Ensolarado == 0){

        printf("\nEsta nublado? ");
        scanf("%d", &Nublado);
        }
    if(Nublado|| Ensolarado){
        Chuvoso = 0;

    }
    else{
        Chuvoso = 1;
        printf("Entao esta chuvoso.\n ");
    }


    if (Nublado){

        printf("Entao vamos jogar");

    }

    else if (Chuvoso){

        printf("Vamos verifiar a forca do vento: \n");
        printf("Informe a forca do vento conforme segue abaixo:\n");

        printf("Forte\n");
        scanf("%d", &Forte);
        if(Forte){
            Fraco=0;
            printf("Entao nao vamos jogar");
        }

        else {

            printf("Entao vamos jogar");
        }

    }

}
