//Receber letra e imprimir se é maiuscula e minuscula
//e imprmir uma faixa de letras

#include <stdio.h>

int main(){
char letra, i;

printf("Digite a letra maiuscula ou minuscula:");
scanf("%c", &letra);

if(letra>=65 && letra<=90){
    printf("Maiuscula.\n");
    for(i=letra;i<=90;i++){
        printf("%c ", i);
    }
}

else if(letra>=97 && letra<=122){
    printf("Minuscula.\n");
    for(i=letra;i<=122;i++){
        printf("%c ", i);
}
}
printf("\n");
return 0;
}
