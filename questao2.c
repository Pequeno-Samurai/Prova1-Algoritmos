#include <stdio.h>

int main()
{
	char op;
	int suspeito, inocente;
	
	printf("Telefonou para a vitima? ");
	scanf("%c", &op);
	
	if (op=='s'){
	suspeito++; 
	if (op=='n'){
	inocente++; 
		} 
	}
	fflush(stdin);
	printf("Esteve no local do crime? ");
	scanf("%c", &op);
	
	if (op=='s'){
	suspeito++;
	if (op == 'n'){
	inocente++; 
		} 
	}
	fflush(stdin);
	printf("Mora perto da vitima? ");
	scanf("%c", &op);
	if (op=='s'){
	suspeito++;
	if (op == 'n'){
	inocente++; 
		} 
	}
	fflush(stdin);	
	printf("Devia a vitima? ");
	scanf("%c", &op);
	if (op=='s'){
	suspeito++;
	if (op == 'n'){
	inocente++; 
		} 
	}
	fflush(stdin);
	printf("Ja trabalhou com a vitima? ");
	scanf("%c", &op);
	if (op=='s'){
	suspeito++;
	if (op == 'n'){
	inocente++; 
		} 
	}	
	if (suspeito==2){
	printf("\nSuspeita"); 
	}
	else if (suspeito > 2 && suspeito <5){
	printf("\nCumplice"); 
	}
	else if (suspeito==5){
	printf("\nAssasino"); 
	}
	else {
	printf("\nInocente"); 
	}		
	return 0; 
}
