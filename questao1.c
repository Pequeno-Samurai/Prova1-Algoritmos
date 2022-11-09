#include <stdio.h>
int main (){
	int num;
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	if (num==1){
		printf("\nDomingo"); }
		else if (num==2){
			printf("\nSegunda"); }
			else if (num==3){
				printf("\nTerca"); }
				else if (num==4){
					printf("\nQuarta"); }
					else if (num==5){
						printf("\nQuinta"); }
						else if(num==6){
							printf("\nSexta"); }
							else if (num==7){
								printf("\nSabado"); }
								else {
									printf("\nNumero invalido"); }
	return 0; }
