//5.Crie uma função em que receba 3 números inteiros e retorne o menor valor.

#include <stdio.h>

int menor(int x, int y, int z);

int main(){
	
	int valor1, valor2, valor3, resultado;
	
	printf("Digite um valor: ");
	scanf("%d", &valor1);
	
	printf("Digite outro valor: ");
	scanf("%d", &valor2);
	
	printf("Digite outro valor: ");
	scanf("%d", &valor3);
	
	resultado = menor(valor1, valor2, valor3);
	
 	printf("\nValor menor: %d\n", resultado);
 	
 return 0; }
 
int menor(int x, int y, int z) {
	
    if (x<y && x<z){
    	return x; }
    else if (y<x && y<z){
    	return y; }
    else {
        return z; } }
