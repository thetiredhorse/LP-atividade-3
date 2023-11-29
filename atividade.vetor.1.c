#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>


int main () {
	setlocale(LC_ALL, "portuguese");
	
int  maiorIdade = 0, menorIdade = 0, i, idade[5];
float altura[5], peso[5], maiorPeso = 0, menorPeso = 0, maiorAltura = 0, menorAltura = 0;
char nome [5][50];

for (i = 0; i < 5; i++) {
	printf("\ndigite o %dª nome: ", i + 1);
	gets(nome[i]);
	
	fflush(stdin);
	
	printf("\ndigite a %dª idade: ", i + 1);
	scanf("%d",&idade[i]);
	
	printf("\ndigite a %dª altura: ", i + 1);
	scanf("%f",&altura[i]);
	
	printf("\ndigite o %dª peso: ", i + 1);
	scanf("%f",&peso[i]);

	//fflush(stdin);
	system("cls || clear");
	
	maiorIdade = idade[i] > maiorIdade ? idade[i] : maiorIdade;
	menorIdade = idade[i] < menorIdade ? idade[i] : menorIdade;
	
	maiorAltura = altura[i] > maiorAltura ? altura[i] : maiorAltura;
	menorAltura = altura[i] < menorAltura ? altura[i] : menorAltura;
	
	maiorPeso = peso[i] > maiorPeso ? peso[i] : maiorPeso;
	menorPeso = peso[i] < menorPeso ? peso[i] : menorPeso;
	
	/*if(numero[i] % 2 == 0) {
		par++;
	} else {
		impar++;
	}
	
	if (numero[i] > 0) {
		numerosPositivos++;
	} else {
		numerosNegativos++;
	}*/
}

printf("\nmostrando resultados \n\n");
	
	printf("\nnome da %d pessoa: %c ", nome);
	printf("\nidade da %d pessoa: %d ", idade);
	printf("\npeso da %d pessoa: %.2f ", peso);
	printf("\naltura da %d pessoa: %.2f ", altura);
	printf("\nmaiorIdade: %d ", maiorIdade);
	printf("\nmenorIdade: %.2f ", menorIdade);
	printf("\nmaiorAltura: %.2f ", maiorAltura);
	printf("\nmenorAltura: %.2f ", menorAltura);
	printf("\nmaiorPeso: %.2f ", maiorPeso);
	printf("\nmenorPeso: %.2f ", menorPeso);

	return  0;
}
