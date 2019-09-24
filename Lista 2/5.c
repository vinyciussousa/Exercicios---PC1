#include <stdio.h>
#include <string.h>

#define qtdJog 5

void posicoes(int p) //printa a posição do jogador a partir do valor recebido
{ 
    switch (p)
    {
    case 1:
        printf("Armador, ");
        break;
    case 2:
        printf("Armador, ");
        break;
    case 3:
        printf("Ala, ");
        break;
    case 4:
        printf("Ala, ");
        break;
    case 5:
        printf("Pivo.\n");
        break;
    }
}

int main(void)
{
    char jogador[qtdJog][20];
    int posicao[qtdJog];
    int cont = 1;

    for(int i = 0; i < qtdJog; i++) //recebe o nome do jogador em uma string e sua posição em um int
    {
        printf("Digite o nome do jogador e sua posicao: \n");
        scanf("%s %d", jogador[i], &posicao[i]);
        getchar();
    }

    for(int i = 0; i < qtdJog;i++) //printa o nome do jogar, e aciona a função para printar sua posição, de acordo com o valor no contador
    {
        for (int j = 0; j < qtdJog; j++)
        {
            if(posicao[j]==cont)
            {
                printf("%s ", jogador[j]);
                posicoes(posicao[j]);
                cont++;
            }
        }
        
    }
    return 0;
}