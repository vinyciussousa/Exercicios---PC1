 //EXIBA O VALOR DO TRABALHO W.
    // W = trabalho.
    // F = força.
    // M = masssa.
    // A = aceleração.
    // D = deslocamento.
    // Pi = posição inicial.
    // Pf = posição final.


#include<stdio.h>

int  main()
{
    float W, F, D, M, A, Pi, Pf;

    printf("TRABALHO (W)\n\n\n"); //DESCOBRIR COMO FAZER PARA CENTRALIZAR A FRASE

    printf("1) A formula para achar o trabalho e: W = F * A\n\n\n");

    printf("VAMOS ACHAR A FORCA PRIMEIRO: \n");
    printf("A forca F e obtida por: F = M * A.\n\n");
    printf("Informe os valores da equacao para achar a forca:\n ");
    scanf("%f%f", &M, &A);

    F = M * A;

    printf("\nA forca F e igual a: %.2f\n\n", F = M *A);

    printf("Vamos achar o desocamento.\n");
    printf("2) A formula para achar o deslocamento (D) e D = Pf - Pi:\n ");

    printf("Informe os valores das posicoes.");
    scanf("%f%f", &Pf, &Pi);

    D = Pf - Pi;

    printf("O deslocamento e igual a: %f\n\n", D = Pf - Pi);

    printf("Logo o trabalho (W) valera: %.2f\n\n", W = F * D);
}
