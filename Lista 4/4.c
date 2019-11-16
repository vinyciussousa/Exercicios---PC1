#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define igual 0
#define maior 1
#define menor -1

typedef struct pessoa
{
    char nome[30];
    char dataDeNascimento[11];
    int sexo;
    int existe;
} pessoa;

static const struct pessoa EmptyStruct;

void inserirPessoa(pessoa *cadastradas, int qtdCadastradas);

void excluirPessoa(pessoa *cadastradas, int qtdCadastradas);

void exibirPessoas(pessoa *cadastradas, int qtdCadastradas);

void maisVelha(pessoa *cadastradas, int qtdCadastradas);

void maisNova(pessoa *cadastradas, int qtdCadastradas);

int comparaData(char data1[], char data2[]);

void salvaPessoas(pessoa *cadastradas, FILE *fp, int qtdCadastradas)
{
    for (int i = 0; i < qtdCadastradas; i++)
    {
        if (cadastradas[i].existe == 1)
        {
            fprintf(fp, "\n");
            fprintf(fp, "%s ", cadastradas[i].nome);
            fprintf(fp, "%s ", cadastradas[i].dataDeNascimento);
            fprintf(fp, "%i", cadastradas[i].sexo);
        }
    }
}

int adicionaPessoas(FILE *fp, pessoa *cadastradas, int qtdCadastradas)
{
    do
    {
        fscanf(fp, "%s", cadastradas[qtdCadastradas].nome);
        fscanf(fp, " %s", cadastradas[qtdCadastradas].dataDeNascimento);
        fscanf(fp, " %i", &cadastradas[qtdCadastradas].sexo);
        cadastradas[qtdCadastradas].existe = 1;
        qtdCadastradas++;

    } while (fgetc(fp) != EOF);

    return qtdCadastradas;
}

int main(int argc, char const *argv[])
{
    FILE *fp;
    pessoa cadastradas[30];
    int qtdCadastradas = 0;
    int controle = 0;
    fp = fopen("pessoas", "a+b");

    if (fp != NULL)
    {
        qtdCadastradas = adicionaPessoas(fp, cadastradas, qtdCadastradas);
    }

    for (int i = 0; i < 30; i++)
    {
        cadastradas[i].existe = 0;
    }

    do
    {
        printf("\nCadastro de Pessoas: ----------------------\n1 - Inserir Pessoa\n2 - Excluir pessoa\n3 - Exibir dados de todas as pessoas\n4 - Exibir dados da pessoa mais velha\n5 - Exibir dados da pessoa mais nova\n6 - Sair do programa\n");
        scanf("%i", &controle);

        switch (controle)
        {
        case 1:
            inserirPessoa(cadastradas, qtdCadastradas);
            qtdCadastradas++;
            break;

        case 2:
            excluirPessoa(cadastradas, qtdCadastradas);
            qtdCadastradas--;
            break;

        case 3:
            exibirPessoas(cadastradas, qtdCadastradas);
            break;

        case 4:
            maisVelha(cadastradas, qtdCadastradas);
            break;

        case 5:
            maisNova(cadastradas, qtdCadastradas);
            break;

        case 6:
            salvaPessoas(cadastradas, fp, qtdCadastradas);
            printf("\nSaindo do Programa.\n");
            break;

        default:
            break;
        }
    } while (controle != 6);

    fclose(fp);

    return 0;
}

void inserirPessoa(pessoa *cadastradas, int qtdCadastradas)
{
    printf("\nDigite o nome: ");
    getchar();
    scanf("%30[^\n]s", cadastradas[qtdCadastradas].nome);
    printf("\nDigite a data de nascimento (dd/mm/aaaa): ");
    getchar();
    scanf("%11[^\n]s", cadastradas[qtdCadastradas].dataDeNascimento);
    printf("\nDigite o sexo (0 para masculino e 1 para feminino): ");
    scanf("%d", &cadastradas[qtdCadastradas].sexo);
    cadastradas[qtdCadastradas].existe = 1;
}

void excluirPessoa(pessoa *cadastradas, int qtdCadastradas)
{
    char nomeBusca[30];
    int achou = 0;
    printf("\nDigite o nome da pessoa que deseja excluir: ");
    getchar();
    scanf("%30[^\n]s", nomeBusca);
    for (int i = 0; i < qtdCadastradas; i++)
    {
        if (strcmp(cadastradas[i].nome, nomeBusca) == 0)
        {
            for (int j = i; j < qtdCadastradas + 1; j++)
            {
                if (cadastradas[j + 1].existe == 1)
                {
                    cadastradas[j] = cadastradas[j + 1];
                }
                else
                {
                    cadastradas[j] = EmptyStruct;
                }
            }
            achou = 1;
            printf("\nPessoa Excluida\n");
        }
    }
    if (achou != 1)
    {
        printf("\nNão existe pessoa cadastrada com esse nome.\n");
    }
}

void exibirPessoas(pessoa *cadastradas, int qtdCadastradas)
{
    printf("\nPessoas cadastradas.\n");
    for (int i = 0; i < qtdCadastradas; i++)
    {
        printf("\n%s", cadastradas[i].nome);
        printf("\n%s", cadastradas[i].dataDeNascimento);
        if (cadastradas[i].sexo == 0)
        {
            printf("\nMasculino\n");
        }
        else
        {
            printf("\nFeminino\n");
        }
    }
}

int comparaData(char data1[], char data2[])
{
    char dia1[3];
    dia1[0] = data1[0];
    dia1[1] = data1[1];
    dia1[2] = '\0';

    char dia2[3];
    dia2[0] = data2[0];
    dia2[1] = data2[1];
    dia2[2] = '\0';

    char mes1[3];
    mes1[0] = data1[3];
    mes1[1] = data1[4];
    mes1[2] = '\0';

    char mes2[3];
    mes2[0] = data2[3];
    mes2[1] = data2[4];
    mes2[2] = '\0';

    char ano1[5];
    for (int i = 0; i < 4; i++)
    {
        ano1[i] = data1[i + 6];
    }
    ano1[4] = '\0';

    char ano2[5];
    for (int i = 0; i < 4; i++)
    {
        ano2[i] = data2[i + 6];
    }
    ano2[4] = '\0';

    int dia1Int = atoi(dia1);
    int dia2Int = atoi(dia2);

    int mes1Int = atoi(mes1);
    int mes2Int = atoi(mes2);

    int ano1Int = atoi(ano1);
    int ano2Int = atoi(ano2);

    if (ano1Int > ano2Int)
    {
        return maior;
    }
    else if (ano1Int < ano2Int)
    {
        return menor;
    }
    else
    {
        if (mes1Int > mes2Int)
        {
            return maior;
        }
        else if (mes1Int < mes2Int)
        {
            return menor;
        }
        else
        {
            if (dia1Int > dia2Int)
            {
                return maior;
            }
            else if (dia1Int < dia2Int)
            {
                return menor;
            }
            else
            {
                return igual;
            }
        }
    }
}

void maisVelha(pessoa *cadastradas, int qtdCadastradas)
{
    int menor1 = 0;

    for (int i = 0; i < qtdCadastradas; i++)
    {
        if (comparaData(cadastradas[i].dataDeNascimento, cadastradas[menor1].dataDeNascimento) == -1)
        {
            menor1 = i;
        }
    }

    printf("\nPessoa mais velha.\n");
    printf("\n%s", cadastradas[menor1].nome);
    printf("\n%s", cadastradas[menor1].dataDeNascimento);
    if (cadastradas[menor1].sexo == 0)
    {
        printf("\nMasculino\n");
    }
    else
    {
        printf("\nFeminino\n");
    }
}

void maisNova(pessoa *cadastradas, int qtdCadastradas)
{
    int maior1 = 0;

    for (int i = 0; i < qtdCadastradas; i++)
    {
        if (comparaData(cadastradas[i].dataDeNascimento, cadastradas[maior1].dataDeNascimento) == 1)
        {
            maior1 = i;
        }
    }

    printf("\nPessoa mais nova.\n");
    printf("\n%s", cadastradas[maior1].nome);
    printf("\n%s", cadastradas[maior1].dataDeNascimento);
    if (cadastradas[maior1].sexo == 0)
    {
        printf("\nMasculino\n");
    }
    else
    {
        printf("\nFeminino\n");
    }
}