#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int num;
	
	printf("Digite um numero inteiro entre 1-7: ");
	scanf("%d", &num);
	
	switch(num)
	{
		case 1:
			printf("\nDomingo");
			break;
		case 2:
			printf("\nSegunda");
			break;
		case 3:
			printf("\nTerça");
			break;
		case 4:
			printf("\nQuarta");
			break;
		case 5:
			printf("\nQuinta");
			break;
		case 6:
			printf("\nSexta");
			break;
		case 7:
			printf("\nSabado");
			break;
		default:
			printf("Numero invalido !");
			break;
	}
	return 0; 
}
