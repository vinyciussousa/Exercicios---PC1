#include <stdio.h>

int main(int argc, char const *argv[])
{
    char V[20];
    int qtdItens = 0;
    char L[20]; // a b a a a a a b b b b c c c c c c c r r
    int qtd[20];
    int i, j;
    int achou;
    int maior = 0;

    //leitura das letras
    for (i=0; i<20; i++)
    {
        scanf("%c", &V[i]);
        getchar();
    }

    for(i=0;i<20;i++)
    {
        achou = 0;
        for(j=0;j<qtdItens;j++)
        {
            if(V[i] == L[j]) //identifica se a letra já foi encontrada no vetor L
            {
                achou = 1;
                qtd[j]++;
            }
        }

        /*se a letra ainda não foi encontrada, 
        adiciona ela ao vetor L e cria um indice para a quantidade dela no vetor qtd, 
        e aumenta a quatidade de itens*/
        if(achou == 0) 
        {
            L[qtdItens] = V[i];
            qtd[qtdItens] = 1;
            qtdItens++;
        }
    }

    //imprime a quantidade encontrada de cada letra
    puts("Quantidade de letras: ");
    for(i=0; i<qtdItens;i++)
    {
        printf("%c %d \n", L[i], qtd[i]);
    }

    //identifica qual letra tem a maior quantidade
    for(i=0;i<qtdItens;i++)
    {
        if(qtd[i] > qtd[maior])
        {
            maior = i;
        }
    }
    
    printf("Char mais frequente: %c %d\n", L[maior], qtd[maior]);

    return 0;
}