#include<stdio.h>
#include<string.h>

int invert(char *s, int y, int start)
{
    if (y <= start)
        return 1;
    else
    {
        if (s[y] != s[start])
            return 0;
        return invert(s, y-1, start+1);
    }
}

int palindromo (char *s)
{
    int aux1, x = 0;
    aux1 = invert(s, strlen(s) - 1, x);
    if (aux1 == 1)
        printf("E Palindromo\n");
    else
        printf("Nao e Palindromo\n");
}


int main()
{
    char s[100];
    scanf("%[^\n]s", s);
    palindromo(s);
    return 0;
}