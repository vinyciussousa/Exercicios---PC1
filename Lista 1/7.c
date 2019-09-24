#include <stdio.h>

int main(int argc, char const *argv[])
{
	char op = ' ';
	float op1, op2;

	scanf("%f", &op1);
	getchar();

	do
	{
		scanf("%c", &op);
		switch (op)
		{
			case '+':
				scanf("%f", &op2);
				op1 = op1 + op2;
				break;
			case '-':
				scanf("%f", &op2);
				op1 = op1 - op2;
				break;
			case '*':
				scanf("%f", &op2);
				op1 = op1 * op2;
				break;
			case '/':
				scanf("%f", &op2);
				if (op2 == 0)
				{
					break;
				}
				op1 = op1 / op2;
				break;
			case '=':
				printf("%.2f \n", op1);
				break;
			default:
				printf("Operador Invalido\n");
			}
		getchar();
		
	} while (op != '=');
	
	return 0;
}
