#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    FILE *fp;
    char dna[1000];
    char ch;
    int id[10];
    int count=0;
    float Ac = 0, Cc = 0, Tc = 0, Gc = 0;
    float A[10], C[10], T[10], G[10];
    float resultado[10];
    int i = 0;
    fp = fopen("1.fasta", "r");
    if (fp == NULL)
    {
        fprintf(stderr, "Arquivo nao encontrado.\n");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == '>')
        {
            Ac = 0;
            Tc = 0;
            Cc = 0;
            Gc = 0;
            while ((ch = fgetc(fp)) != EOF)
            {
                if (ch == 'A')
                {
                    Ac++;
                }
                if (ch == 'T')
                {
                    Tc++;
                }
                if (ch == 'C')
                {
                    Cc++;
                }
                if (ch == 'G')
                {
                    Gc++;
                }
                if (ch == '>')
                {
                    A[i] = Ac;
                    T[i] = Tc;
                    C[i] = Cc;
                    G[i] = Gc;
                    id[i] = i;
                    resultado[i] = (((Gc + Cc) / (Gc + Cc + Ac + Tc)) * 100);
                    i++;
                    Ac = 0;
                    Tc = 0;
                    Cc = 0;
                    Gc = 0;
                    count++;
                }
            }
            A[i] = Ac;
            T[i] = Tc;
            C[i] = Cc;
            G[i] = Gc;
            id[i] = i;
            resultado[i] = (((Gc + Cc) / (Gc + Cc + Ac + Tc)) * 100);
            i++;
            count++;
            Ac = 0;
            Tc = 0;
            Cc = 0;
            Gc = 0;
        }
    }

    for (i = 0; i < count; i++)
    {
        printf("A: %.f\n", A[i]);
        printf("T: %.f\n", T[i]);
        printf("C: %.f\n", C[i]);
        printf("G: %.f\n", G[i]);
        printf("id%i\tGC:%f\n", id[i] + 1, resultado[i]);
    }
    fclose(fp);
}