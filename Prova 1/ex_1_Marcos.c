#include <stdio.h>

int main(int argc, char const *argv[])
{
    int X, Y;
    int i = 0;
    int diferenca1, diferenca2;

    scanf("%i", &X);

    Y = i*i;
    diferenca1 = X - Y;
    i++;

    Y = i*i;
    diferenca2 = X - Y;
    i++;

    while (diferenca2 < diferenca1)
    {   
        diferenca1 = diferenca2;
        Y = i*i;
        diferenca2 = X - Y;
        if (diferenca2 > 0)
        {   
            if (diferenca2 > diferenca1)
            {
                break;
            }
            else
            {
                i++;
            }
        }
        else
        {
            diferenca2 = diferenca2*(-1);
            if (diferenca2 > diferenca1)
            {
                break;
            }
            else
            {
                i++;
            }
            
        }
        
        
    }
    
    printf("%i\n", i-1); //Porque o laço para no i que da erro, então se usa o i anterior;
    
    return 0;
}
