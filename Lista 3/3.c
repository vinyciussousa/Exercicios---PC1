#include <stdio.h>
#include <string.h>

typedef int bool;
#define true 1
#define false 0

struct nPerecivel
{
};

struct perecivel
{
    char prazoDeValidade[11];
};

typedef struct produto
{
    char nome[20];
    char codigo[14];
    float preco;
    int quantidade;
    bool tipo;
    union {
        struct nPerecivel nPerecivel;
        struct perecivel perecivel;
    };

} produto;

void adicionarProduto(produto *mercado, int nroElem);

void buscarProduto(produto *mercado, int nroElem);

void precoProduto(produto *mercado, int nroElem);

int main(int argc, char const *argv[])
{
    produto mercado[20];
    int controle = 0;
    int nroElem = 0;
    do
    {
        printf("\nMercado-----------\n1 - Cadastrar novo produto\n2 - Exibir preco de um produto\n3 - Alterar preco de um produto\n4 - Encerrar sistema\n");
        scanf("%i", &controle);
        switch (controle)
        {
        case 1:
            adicionarProduto(mercado, nroElem);
            nroElem++;
            break;
        case 2:
            buscarProduto(mercado, nroElem);
            break;
        case 3:
            precoProduto(mercado, nroElem);
            break;
        case 4:
            printf("\nSaindo do programa.");
            break;

        default:
            break;
        }
    } while (controle != 4);

    return 0;
}

void adicionarProduto(produto *mercado, int nroElem)
{
    if (nroElem < 20)
    {
        printf("\nDigite o nome do produto: ");
        getchar();
        scanf("%20[^\n]s", mercado[nroElem].nome);
        printf("\nDigite o codigo de barras: ");
        getchar();
        scanf("%13[^\n]s", mercado[nroElem].codigo);
        printf("\nDigite o preco: ");
        getchar();
        scanf("%f", &mercado[nroElem].preco);
        printf("\nDigite a quantidade: ");
        scanf("%i", &mercado[nroElem].quantidade);
        printf("\nDigite o tipo(0 para perecivel e 1 para nao perecivel): ");
        scanf("%i", &mercado[nroElem].tipo);
        if (mercado[nroElem].tipo == 0)
        {
            printf("\nDigite a data de validade do produto: ");
            getchar();
            scanf("%11s", mercado[nroElem].perecivel.prazoDeValidade);
        }
    }
}

void buscarProduto(produto *mercado, int nroElem)
{
    char codigoBusca[14];
    int achou = 0;
    printf("\nDigite o codigo do produto que deseja encontrar: ");
    getchar();
    scanf("%13[^\n]s", codigoBusca);
    for (int i = 0; i < nroElem; i++)
    {
        if (strcmp(mercado[i].codigo, codigoBusca) == 0)
        {
            printf("\nProduto encontrado.\n");
            printf("\n%s", mercado[i].nome);
            printf("\n%s", mercado[i].codigo);
            printf("\nR$%.2f", mercado[i].preco);
            printf("\n%i", mercado[i].quantidade);
            if (mercado[i].tipo == 0)
            {
                printf("\nPerecivel");
                printf("\n%s\n", mercado[i].perecivel.prazoDeValidade);
            }
            else
            {
                printf("\nNao perecivel\n");
            }
            achou = 1;
        }
    }
    if (achou == 0)
    {
        printf("\nEsse produto não existe.\n");
        return;
    }
}

void precoProduto(produto *mercado, int nroElem)
{
    char codigoBusca[14];
    int achou = 0;
    printf("\nDigite o codigo do produto que deseja encontrar: ");
    getchar();
    scanf("%13[^\n]s", codigoBusca);
    getchar();
    for (int i = 0; i < nroElem; i++)
    {
        if (strcmp(mercado[i].codigo, codigoBusca) == 0)
        {
            printf("\nDigite o novo preco do produto: ");
            scanf("%f", &mercado[i].preco);
            achou = 1;
        }
    }
    if (achou == 0)
    {
        printf("\nEsse produto não existe.\n");
        return;
    }
}