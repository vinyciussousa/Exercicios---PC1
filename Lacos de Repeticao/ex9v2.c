#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{	
	int op;//Não consegui fazer com char :((
	double x, y;
	double resultado;

	do{
		printf("Menu:\n");
		printf("1 - Adição\n");
		printf("2 - Subtração\n");
		printf("3 - Multiplicação\n");
		printf("4 - Divisão\n");
		printf("5 - Potenciação\n");
		printf("6 - Sair\n");
		printf("Insira a operação desejada: ");
		scanf("%d", &op);
		if (op != 6){
			printf("Digite o primeiro operando: ");
			scanf("%lf", &x);
			printf("Digite o segundo operando: ");
			scanf("%lf", &y);

			switch(op){
				case 1:
					resultado = x+y;
					break;
				case 2:
					resultado = x-y;
					break;
				case 3:
					resultado = x*y;
					break;
				case 4:
					resultado = x/y;
					break;
				case 5:
					resultado = pow(x,y);
					break;

			}
			printf("O resultado é %lf\n", resultado);
		}

	}while(op != 6);

	return 0;
}