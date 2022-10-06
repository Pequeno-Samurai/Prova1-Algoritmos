//4.Crie uma função que receba 3 números inteiros e retorne o maior valor.

#include <stdio.h>

int maior(int x, int y, int z);

int main(){
	
	int valor1, valor2, valor3, resultado;
	
	printf("Digite um valor: ");
	scanf("%d", &valor1);
	
	printf("Digite outro valor: ");
	scanf("%d", &valor2);
	
	printf("Digite outro valor: ");
	scanf("%d", &valor3);
	
	resultado = maior(valor1, valor2, valor3);
	
 	printf("\nValor maior: %d\n", resultado);
 	
 return 0; }
 
int maior(int x, int y, int z) {
	
    if (x>y && x>z){
    	return x; }
    else if (y>x && y>z){
    	return y; }
    else {
        return z; } }
