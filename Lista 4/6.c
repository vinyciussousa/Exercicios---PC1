#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    FILE *fp;
    int i = 1;
    char aux1[31];
    char aux2[31];
    char aux3 = ' ';
    float aux4 = 0;
    char text[31];
    fp = fopen("6.bin", "w+b");
    while (i <= 3)
    {
        if (i == 1)
        {
            fflush(stdin);
            fprintf(fp, ">Funcionario%i\n", i);
            printf("Digite o nome do Funcionario %i: \n", i);
            scanf("%30[^\n]s", aux1);
            getchar();
            fprintf(fp, "%s\n", aux1);
            printf("Digite a profissao do Funcionario %i: \n", i);
            scanf("%30[^\n]s", aux2);
            getchar();
            fprintf(fp, "%s\n", aux2);
            printf("Digite o sexo do Funcionario %i(m ou f): \n", i);
            scanf("%c", &aux3);
            getchar();
            fprintf(fp, "%c\n", aux3);
            printf("Digite o salario do Funcionario %i: \n", i);
            scanf("%f", &aux4);
            fprintf(fp, "%f\n", aux4);
            i++;
        }

        fflush(stdin);
        fprintf(fp, ">Funcionario%i\n", i);
        getchar();
        printf("Digite o nome do Funcionario %i: \n", i);
        scanf("%30[^\n]s", aux1);
        getchar();
        fprintf(fp, "%s\n", aux1);
        printf("Digite a profissao do Funcionario %i: \n", i);
        scanf("%30[^\n]s", aux2);
        getchar();
        fprintf(fp, "%s\n", aux2);
        printf("Digite o sexo do Funcionario %i(m ou f): \n", i);
        scanf("%c", &aux3);
        getchar();
        fprintf(fp, "%c\n", aux3);
        printf("Digite o salario do Funcionario %i: \n", i);
        scanf("%f", &aux4);
        fprintf(fp, "%f\n", aux4);
        i++;
    }

    rewind(fp);

    while ((fgets(text, sizeof(text), fp)) != NULL)
    {
        if ((text[0]) == '>' && text[12] == '3')
        {
            printf("Dados do Funcionario 3: \n");
            while ((fgets(text, sizeof(text), fp)) != NULL)
            {
                if (text[0] == '>')
                {
                    break;
                }
                printf("%s", text);
            }
        }
    }

    rewind(fp);

    fclose(fp);

    return 0;
}
