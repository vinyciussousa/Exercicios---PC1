#include <stdio.h>

int main(void){//incompleto

    int n, i, maior, menor, segmaior, segmenor;

    printf("Digite a quantidade de numeros a ser lida: \n");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        int valor;

        printf("Digite um valor: \n");
        scanf("%d", &valor);

        if(i==0){
            maior=valor;
            menor=valor;
        }
        else if(i==1){
            if(valor>=maior){
                segmaior=maior;
                maior=valor;
            }
            else{
                segmaior=valor;
            }
            if(valor<=menor){
                segmenor=menor;
                menor=valor;
            }
            else{
                segmenor=valor;
            }
        }
        else{
            if(valor>=maior){
                segmaior=maior;
                maior=valor;
            }
            else if(valor<=menor){
                segmenor=menor;
                menor=valor;
            }
        }
        
    }

    if(n==0){
        printf("Sem valores introduzidos.\n");
    }

    else if(i==1){
        printf("O maior valor e: %d\n", maior);
        printf("O menor valor e: %d\n", menor);
    }

    else{
        printf("O maior valor e: %d\n", maior);
        printf("O menor valor e: %d\n", menor);
        printf("O segundo maior valor e: %d\n", segmaior);
        printf("O segundo menor valor e: %d\n", segmenor);
    }
    return 0;
}