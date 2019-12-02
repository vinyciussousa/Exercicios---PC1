#include <stdio.h>
#include <stdlib.h>

void merge(int vetor[], int comeco, int meio, int fim)
{

    int com1 = comeco, com2 = meio + 1, comAux = 0, tam = fim - comeco + 1;

    int *vetAux;

    vetAux = (int *)malloc(tam * sizeof(int));

    while (com1 <= meio && com2 <= fim)
    {

        if (vetor[com1] < vetor[com2])
        {

            vetAux[comAux] = vetor[com1];

            com1++;
        }
        else
        {

            vetAux[comAux] = vetor[com2];

            com2++;
        }

        comAux++;
    }

    while (com1 <= meio)
    {

        vetAux[comAux] = vetor[com1];

        comAux++;

        com1++;
    }

    while (com2 <= fim)
    {

        vetAux[comAux] = vetor[com2];

        comAux++;

        com2++;
    }

    for (comAux = comeco; comAux <= fim; comAux++)
    {
        vetor[comAux] = vetAux[comAux - comeco];
    }

    free(vetAux);
}

void mergeSort(int vetor[], int comeco, int fim)
{

    if (comeco < fim)
    {

        int meio = (fim + comeco) / 2;

        mergeSort(vetor, comeco, meio);

        mergeSort(vetor, meio + 1, fim);

        merge(vetor, comeco, meio, fim);
    }
}

int main(int argc, char const *argv[])
{
    int vetor[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %d termo do vetor: ", i);
        scanf("%d", &vetor[i]);
    }

    mergeSort(vetor, 0, 9);

    printf("Vetor ordenado: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
