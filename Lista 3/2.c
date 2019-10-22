#include <stdio.h>
#include <stdlib.h>

typedef struct musica
{
    int numero;
    char nome[25];
    char duracao[5]; //MM:SS
} musica;

typedef struct album
{
    char nome[25];
    char genero[25];
    int qtdMusicas;
    musica musicas[10];
} album;

static const struct album EmptyStruct;

int criarAlbum(album *album, int existe);

void adicionarMusicas(album *album, int existe);

void listarMusicas(album album);

int main(int argc, char const *argv[])
{
    album album;
    int existe = 0;
    int controle = 0;
    do
    {
        printf("\nDiscoteca---------\n1 - Criar album musical \n2 - Adicionar musica ao album \n3 - Listar musicas do album \n4 - Sair \n>");
        scanf("%i", &controle);
        switch (controle)
        {
        case 1:
            existe = criarAlbum(&album, existe);
            break;
        case 2:
            adicionarMusicas(&album, existe);
            break;
        case 3:
            listarMusicas(album);
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

int criarAlbum(album *album, int existe)
{
    if (existe)
    {
        printf("\nExcluindo album anterior.");
        *album = EmptyStruct;
        existe = 0;
        criarAlbum(album, existe);
        return 1;
    }
    else
    {
        printf("\nDigite o nome do album: ");
        getchar();
        scanf("%25[^\n]s", album->nome);
        printf("\nDigite o genero do album: ");
        getchar();
        scanf("%25[^\n]s", album->genero);
        printf("\nDigite a quantidade de musicas do album: ");
        scanf("%i", &album->qtdMusicas);
        if (album->qtdMusicas > 10)
        {
            int certo = 0;
            do
            {
                printf("\nO album so pode ter até 10 musicas.");
                printf("\nDigite a quantidade de musicas do album: ");
                scanf("%i", &album->qtdMusicas);
                if (album->qtdMusicas > 10)
                {
                    certo = 0;
                }
                else
                {
                    certo = 1;
                }
            } while (certo != 1);
        }
        return 1;
    }
    return 0;
}

void adicionarMusicas(album *album, int existe){
    if (existe)
    {
        int i = 0;
        do
        {
            album->musicas[i].numero = i;
            printf("\nDigite o nome da %i musica do album: ", i);
            getchar();
            scanf("%25[^\n]s", album->musicas[i].nome);
            printf("\nDigite a duracao dessa musica(MM:SS): ");
            getchar();
            scanf("%5[^\n]s", album->musicas[i].duracao);
            i++;
        } while (i < album->qtdMusicas);
        
    }
    else
    {
        printf("\nNao existe album para se adicionar musicas.");
        return;
    }
}

void listarMusicas(album album){
    for (int i = 0; i < album.qtdMusicas; i++)
    {
        printf("\n%i - %s", i, album.musicas[i].nome);
        printf("\n%s\n", album.musicas[i].duracao);
    }
}