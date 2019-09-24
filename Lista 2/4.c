#include <stdio.h>
#include <math.h>

#define MAX 8

int converter(int s[]) //converte o número de binario para decimal usando potencias de base 2
{
    int aux;
    int soma = 0;
    int p = 7;
    for (int i = 0; i < MAX; i++, p--)
    {   
        if (s[i] == 0)
        {
            continue;
        }
        else
        {
            aux = pow(2,p);
            soma = soma + aux;
        }
            
    }
    return soma;
}

int main(int argc, char const *argv[])
{
    int bin[MAX];
    int sll;

    //lê o número binario em um vetor
    printf("Digite um valor em binario (0 ou 1 apenas) com ate oito posicoes: ");
    for (int i = 0; i < MAX; i++)
    {
        scanf("%d", &bin[i]);
    }
    
    //printa o valor convertido para decimal
    printf("O valor em decimal e = %d\n", converter(bin));

    //recebe o deslocamento
    printf("Indique o deslocamento a esquerda desejado: ");
    scanf("%d", &sll);

    //realiza o deslocamento, movimentando os valores a esquerda a quantidade de vezes indicada, 
    //e substituindo os valores restantes por 0
    for (int i = 0; i < MAX; i++)
    {
        if (i < (MAX-sll))
        {
            bin[i] = bin[i+sll];
        }
        else
        {
            bin[i] = 0;
        }
    }

    //printa o vetor resultante e o valor em decimal desse vetor
    printf("O numero binario apos o sll e: ");
    for (int i = 0; i < MAX; i++)
    {
        printf("%d", bin[i]);
    }
    printf("\n");

    printf("O valor em decimal do numero binario resultante do sll e = %d", converter(bin));
    
    return 0;
}
