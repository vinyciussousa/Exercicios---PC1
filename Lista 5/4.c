#include<stdio.h>
#include<stdlib.h>

int busca_binaria(int vetor[],int inicio,int fim,int num)
{
    int meio = (inicio+fim)/2;

    if(inicio<=fim)
    {
        if(vetor[meio] == num)
        {
            printf("posicao = %d\n", meio);
            return 0;
        }
        else if (vetor[meio] > num)
        {
            return busca_binaria(vetor, inicio, meio-1, num);
        }
        else
        {
            return busca_binaria(vetor, meio+1, fim, num);
        }
    }
    else
    {
        printf("Numero Nao encontrado\n");
        return 0;
    }
}

int main()
{
    int n;

    printf("Informe o numero para ser encontrado: ");
    scanf("%d",&n);

    FILE *fp;
    int vetor[100], i=0, aux;

    fp = fopen("numeros.txt", "r" );


    if(fp == NULL)
    {
        printf("Erro!");
    }

    else
    {
        while (fscanf(fp,"%d",&vetor[i]) > 0) i++;
    }

    fclose(fp);

    busca_binaria(vetor,0,99,n);

    return 0;
}
