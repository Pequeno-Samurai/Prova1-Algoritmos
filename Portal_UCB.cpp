#include <stdio.h>
#include <string.h>
int main (){
	
	int op, financeiro, matricula, semestre, ano, faltas[5]={0, 0, 0, 0, 0};
	char materia[][99]={"Algoritmos: ","Engenharia: ", "Dados: ","Sistemas: ", "Projeto: "},nome[99];
	float nota[5]={9.0, 8.5, 8.7, 8.0, 9.5}, mensalidade[6]={1018.48, 847.59, 847.59, 847.59, 847.59, 847.59};
	
	strcpy(materia[0],"Algoritmos: ");
	strcpy(materia[1],"Engenharia: ");
	strcpy(materia[2],"Dados: ");
	strcpy(materia[3],"Sistemas: ");
	strcpy(materia[4],"Projeto: "); 
	
	printf("Digite o seu primeiro nome: ");
	scanf("%s", &nome);
	printf("Digite somente os numeros da sua matricula: ");
	scanf("%d", &matricula);
	
	if (matricula==22100797) {
	
	printf("\nBem vindo ao Portal da catolica: ");
	printf("\n");
	printf("\n1.Notas: \n2.Faltas: \n3.Grade de horarios: \n4.Financeiro: \n");
	
	printf("Digite sua escolha: ");
	scanf("%d", &op);
	
	if (op==1) {
	
	printf("\nDigite o ano que deseja visualizar: \n1.2022\n2.2023\n3.2024\n4.2025\nDigite sua escolha: ");
	scanf("%d", &ano);
	

	
	printf("\nDigite o semestre que deseja visualizar: ");
	scanf("%d", &semestre); 
	
	if (semestre==1) { 
	
		printf("\nSuas notas do primeiro semestre: \n\n");
	
			for (int i=0;i<5;i++){
		
				printf("%s%.1f\n", materia[i], nota[i]); } } 
				
				else {
					printf("\nDados do semestre indisponiveis !"); } } 
					 
	if (op==2) {
		
	printf("\nDigite o ano que deseja visualizar: \n1.2022\n2.2023\n3.2024\n4.2025\nDigite sua escolha: ");
	scanf("%d", &ano);
	printf("\nDigite o semestre que deseja visualizar: ");
	scanf("%d", &semestre); 
	
	if (semestre==1) { 
	
		printf("\nSuas faltas do primeiro semestre: \n\n");
	
			for (int i=0;i<5;i++){
		
				printf("%s%d%c\n", materia[i], faltas[i], 37); } }
				
				else {
					printf("\nDados do semestre indisponiveis !"); } }
					
	if (op==3) {
		printf("\nAlgoritmos - Segunda das 19:15 as 21:45\nEngenharia de software - Terca das 19:15 as 21:45\nBanco de dados - Quarta das 19:15 as 21:45\nSistemas computacionais - Quinta das 19:15 as 21:45\nProjeto interdisciplinar - Sexta das 19:15 as 21:45"); }
		
	if (op==4) {
		
		printf("\n1.Gerar boleto:\n2.Visualizar boletos:\n3.Metodos de pagamento:\nDigite sua escolha: ");
		scanf("%d", &financeiro); 
		
		if (financeiro==1){
			
			printf("\nBoleto enviado por email"); }
			
			if (financeiro==2){
				printf("\n");
				for (int i=0;i<6;i++){
					printf("Mensalidade %d: %.2f\n", i+1, mensalidade[i]); } } }
					
					if (financeiro==3){
						printf("\nCredito\nDebito\nBoleto"); } }
						
	else {
		printf("\nMatricula invalida !"); }
					
	return 0;}
