#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
	
	char op;
	int suspeito, inocente;
	
	printf("Telefonou para a vitima? ");
	scanf("%c", &op);
	if (op=='s'){
		suspeito++; 
		if (op=='n'){
			inocente++; } }
			
	printf("Esteve no local do crime? ");
	cin >> op;
	if (op=='s'){
		suspeito++;
		if (op == 'n'){
			inocente++; } }
			
	printf("Mora perto da vitima? ");
	cin >> op;
	if (op=='s'){
		suspeito++;
		if (op == 'n'){
			inocente++; } }
			
	printf("Devia a vitima? ");
	cin >> op;
	if (op=='s'){
		suspeito++;
		if (op == 'n'){
			inocente++; } }
			
	printf("Ja trabalhou com a vitima? ");
	cin >> op;
	if (op=='s'){
		suspeito++;
		if (op == 'n'){
			inocente++; } }
			
	if (suspeito==2){
		printf("\nSuspeita"); }
		else if (suspeito > 2 && suspeito <5){
			printf("\nCumplice"); }
			else if (suspeito==5){
				printf("\nAssasino"); }
				else {
					printf("\nInocente"); }
					
	return 0; }
