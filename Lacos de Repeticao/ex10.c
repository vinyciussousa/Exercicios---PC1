#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	int meses;
	double inicial;
	double juros;
	double resultado;

	printf("Digite seu investimento inicial: ");
	scanf("%lf", &inicial);
	printf("Digite o número de meses: ");
	scanf("%d", &meses);
	printf("Digite a taxa de juros: ");
	scanf("%lf", &juros);

	//if(meses == 1){ Não monta a tabela
	//	resultado = inicial*(1+juros);
	//	printf("O seu investimento se tornara %.2lf após %d meses a %.2lf por cento ao mês\n", resultado, meses, juros);
	//}
	//else{
	//	resultado = inicial * pow((1+juros),meses);
	//	printf("O seu investimento se tornara %.2lf após %d meses a %.2lf por cento ao mês\n", resultado, meses, juros);
	//}

	printf("Número de Meses      Investimento Acumulado\n");
	for (int i = 1; i <= meses; ++i)
	{
		resultado = inicial * pow((1+juros),i);
		printf("%-21d", i);
		printf("%.2lf\n", resultado);
	}
	return 0;
}