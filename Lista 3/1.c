#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

void converteData(pessoa *cadastradas, int qtdCadastradas);

//As funções de descobrir a pessoa mais velha e a mais nova estão com problemas, mas decidir deixa-las, já que funcionam em alguns casos.

void maisVelha(pessoa *cadastradas, int qtdCadastradas);

void maisNova(pessoa *cadastradas, int qtdCadastradas);

int main(int argc, char const *argv[])
{
    pessoa cadastradas[30];
    int qtdCadastradas = 0;
    int controle = 0;

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
            printf("\nSaindo do Programa.\n");
            break;

        default:
            break;
        }
    } while (controle != 6);

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

void maisVelha(pessoa *cadastradas, int qtdCadastradas)
{
    char diasc[qtdCadastradas][3];
    char mesesc[qtdCadastradas][3];
    char anosc[qtdCadastradas][5];
    int dias[qtdCadastradas];
    int meses[qtdCadastradas];
    int anos[qtdCadastradas];
    int menor = 0;

    for (int i = 0; i < qtdCadastradas; i++)
    {
        diasc[i][0] = cadastradas[i].dataDeNascimento[0];
        diasc[i][1] = cadastradas[i].dataDeNascimento[1];
        mesesc[i][0] = cadastradas[i].dataDeNascimento[3];
        mesesc[i][1] = cadastradas[i].dataDeNascimento[4];
        anosc[i][0] = cadastradas[i].dataDeNascimento[6];
        anosc[i][1] = cadastradas[i].dataDeNascimento[7];
        anosc[i][2] = cadastradas[i].dataDeNascimento[8];
        anosc[i][3] = cadastradas[i].dataDeNascimento[9];
    }

    for (int i = 0; i < qtdCadastradas; i++)
    {
        dias[i] = atoi(diasc[i]);
        meses[i] = atoi(mesesc[i]);
        anos[i] = atoi(anosc[i]);
    }

    for (int i = 0; i < qtdCadastradas; i++)
    {
        if (anos[i] < anos[menor])
        {
            menor = i;
        }
        else if (anos[i] == anos[menor])
        {
            if (meses[i] < meses[menor])
            {
                menor = i;
            }
            else if (meses[i] == meses[menor])
            {
                if (dias[i] < dias[menor])
                {
                    menor = i;
                }
            }
        }
    }

    printf("%s", cadastradas[menor].nome);
    printf("%s", cadastradas[menor].dataDeNascimento);
    printf("%i", cadastradas[menor].sexo);
}

void maisNova(pessoa *cadastradas, int qtdCadastradas)
{
    char diasc[qtdCadastradas][3];
    char mesesc[qtdCadastradas][3];
    char anosc[qtdCadastradas][5];
    int dias[qtdCadastradas];
    int meses[qtdCadastradas];
    int anos[qtdCadastradas];
    int maior = 0;

    for (int i = 0; i < qtdCadastradas; i++)
    {
        diasc[i][0] = cadastradas[i].dataDeNascimento[0];
        diasc[i][1] = cadastradas[i].dataDeNascimento[1];
        mesesc[i][0] = cadastradas[i].dataDeNascimento[3];
        mesesc[i][1] = cadastradas[i].dataDeNascimento[4];
        anosc[i][0] = cadastradas[i].dataDeNascimento[6];
        anosc[i][1] = cadastradas[i].dataDeNascimento[7];
        anosc[i][2] = cadastradas[i].dataDeNascimento[8];
        anosc[i][3] = cadastradas[i].dataDeNascimento[9];
    }

    for (int i = 0; i < qtdCadastradas; i++)
    {
        dias[i] = atoi(diasc[i]);
        meses[i] = atoi(mesesc[i]);
        anos[i] = atoi(anosc[i]);
    }

    for (int i = 0; i < qtdCadastradas; i++)
    {
        if (anos[i] > anos[maior])
        {
            maior = i;
        }
        else if (anos[i] == anos[maior])
        {
            if (meses[i] > meses[maior])
            {
                maior = i;
            }
            else if (meses[i] == meses[maior])
            {
                if (dias[i] > dias[maior])
                {
                    maior = i;
                }
            }
        }
    }

    printf("%s", cadastradas[maior].nome);
    printf("%s", cadastradas[maior].dataDeNascimento);
    printf("%i", cadastradas[maior].sexo);
}