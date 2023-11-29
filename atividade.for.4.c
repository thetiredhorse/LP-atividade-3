#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>


int main () {
	setlocale(LC_ALL, "portuguese");
	
int i, soma = 0, numero[5], numeroPositivo = 0, numeroNegativo = 0, par = 0, impar = 0, maiorNumero, menorNumero;
float media, mediapar;


for (i = 0; i < 5; i++) {	
	printf("\n%dª numero: ", i + 1);
	scanf("%d",&numero[i]);
	
	
if(numero[i] % 2 == 0) {
		par++;
	} else {
		impar++;
	}
	
	if (numero[i] > 0) {
		numeroPositivo++;
	} else {
		numeroNegativo++;
	}
	
	maiorNumero = numero[i] > maiorNumero ? numero[i] : maiorNumero;
	menorNumero = numero[i] < menorNumero ? numero[i] : menorNumero;
	
	soma += par;
	soma += i;
}
	mediapar = soma / i;
	media = soma / i;
	
printf("\nmostrando resultados \n\n");
	
	printf("\nmedia dos numeros pares:  %.2f", mediapar);
	printf("\nquantidade de numeros impares: %d ", impar);
	printf("\nquantidade de numeros negativos: %d ", numeroNegativo);
	printf("\nmaior numero: %d ", maiorNumero);
	printf("\nmenor numero: %d ", menorNumero);
	printf("\nmedia total: %.2f ", media);

	return  0;
}
