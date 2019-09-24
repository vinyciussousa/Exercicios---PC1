#include <stdio.h>

int mesa(char R[8][4], int L, int C)//testa se a mesa esta vazia (cont = 0), cheia(cont = 4), ou meio ocupada(cont > 0 e < 4)
{
    int i, j;
    int cont = 0;
    for (i = L; i < L + 2; i++)
    {
        for (j = C; j < C + 2; j++)
        {
            if(R[i][j] == 'V')
                cont++;
        }
    }
    
    return cont;
}

int main(int argc, char const *argv[])
{
    char R[8][4];
    int i, j;
    int idmesa = 1;
    int totalOcupado[8];
    int totalVago[8];
    int parcialVago[8];
    int contOcupado = 0, contTvago = 0, contPvago = 0;
    int situacaoMesa;

    //leitura das cadeiras 
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%c", &R[i][j]);
            getchar();
        }
    }

    //verificação das mesas
    for (i = 0; i < 8; i += 2)
    {
        situacaoMesa = mesa(R, i, 0);
        if (situacaoMesa == 4)
        {
            totalOcupado[contOcupado] = idmesa;
            contOcupado++;
        }
        else if(situacaoMesa == 0)
        {
            totalVago[contTvago] = idmesa;
            contTvago++;
        }
        else
        {
            parcialVago[contPvago] = idmesa;
            contPvago++;
        }
        idmesa++;

        situacaoMesa = mesa(R, i, 2);
        if (situacaoMesa == 4)
        {
            totalOcupado[contOcupado] = idmesa;
            contOcupado++;
        }
        else if(situacaoMesa == 0)
        {
            totalVago[contTvago] = idmesa;
            contTvago++;
        }
        else
        {
            parcialVago[contPvago] = idmesa;
            contPvago++;
        }
        idmesa++;
    }

    printf("Mesas totalmente ocupadas: ");
    for ( i = 0; i < contOcupado; i++)
    {
        printf("Mesa %d ", totalOcupado[i]);
    }
    printf("\nMesas parcialmente ocupadas: ");
    for ( i = 0; i < contPvago; i++)
    {
        printf("Mesa %d ", parcialVago[i]);
    }
    printf("\nMesas totalmente vagas: ");
    for ( i = 0; i < contTvago; i++)
    {
        printf("Mesa %d ", totalVago[i]);
    }
    
    return 0;
}
