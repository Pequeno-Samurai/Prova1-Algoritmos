//3.Crie uma função que receba 2 números inteiros e retorne o menor valor.

#include <stdio.h>

int menor(int x, int y);

int main(){
	
	int valor1, valor2, resultado;
	
	printf("Digite um valor: ");
	scanf("%d", &valor1);
	
	printf("Digite outro valor: ");
	scanf("%d", &valor2);
	
	resultado = menor(valor1, valor2);
	
 	printf("\nValor menor: %d\n", resultado);
 	
 return 0; }
 
int menor(int x, int y){
	
 	if (x < y) {
 		return x; }
	else{
 		return y; } }
