#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void merge(double vetor[], int comeco, int meio, int fim)
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

void mergeSort(double vetor[], int comeco, int fim)
{

    if (comeco < fim)
    {

        int meio = (fim + comeco) / 2;

        mergeSort(vetor, comeco, meio);

        mergeSort(vetor, meio + 1, fim);

        merge(vetor, comeco, meio, fim);
    }
}

typedef struct item
{
    char nome[31];
    double qtd;
    double preco;
} item;

int main(int argc, char const *argv[])
{
    FILE *fp;
    FILE *fp2;
    item objetos[10];
    double resultado[10];
    char string[50];
    int i = 0;
    fp = fopen("2.txt", "r");
    fp2 = fopen("2_ordenado.txt", "w");

    while ((fgets(string, sizeof(string), fp)) != NULL)
    {
        if (i == 0)
        {
            fseek(fp, 0, SEEK_SET);
            fprintf(fp, "\n");
            fscanf(fp, "%[^;]s", objetos[i].nome);
            fscanf(fp, ";%lf;", &objetos[i].qtd);
            fscanf(fp, "%lf", &objetos[i].preco);
            i++;
        }
        fscanf(fp, "\n%[^;]s", objetos[i].nome);
        fscanf(fp, ";%lf;", &objetos[i].qtd);
        fscanf(fp, "%lf", &objetos[i].preco);
        i++;
    }

    for (int k = 0; k < 10; k++)
    {
        resultado[k] = objetos[k].qtd * objetos[k].preco;
    }

    mergeSort(resultado, 0, 9);

    rewind(fp);

    double test;

    for (int k = 10; k >= 0; k--)
    {
        for (int j = 0; j < 10; j++)
        {

            if ((test = fabs(resultado[k] - (objetos[j].qtd * objetos[j].preco))) < 1)
            {
                fprintf(fp2, "%s;%.0lf;%.2lf\n", objetos[j].nome, objetos[j].qtd, objetos[j].preco);
                break;
            }
        }
    }

    printf("Arquivo ordenado com sucesso!!");

    fclose(fp);
    fclose(fp2);

    return 0;
}
