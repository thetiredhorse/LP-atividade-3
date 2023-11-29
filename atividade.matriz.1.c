#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>


int main () {
	setlocale(LC_ALL, "portuguese");
	
	
int idade [5], soma = 0, i, j;
char nome[5] [50]; 
float media [5], numeros[5][3];

for (i = 0; i < 5; i++) {
	printf("\nnome do %dª aluno: ", i + 1);
	gets(nome[i]);
	
	fflush(stdin);
	
	printf("\nidade do %dª aluno: ", i + 1);
	scanf("%d",&idade[i]);
	
	for (j = 0; j < 3; j++) {
		printf("\n%dª nota: ", j + 1);
		scanf("%f", &numeros[i][j]);
		
		soma += numeros[i][j];
		//stbuf(stdin, 0);	online gdb
		fflush(stdin);
	}	
	
	media [i]= soma / j;
	soma = 0;
}

system("cls || clear");

printf("\nmostrando dados\n\n");


for (i = 0; i < 5; i++) {
	printf("\naluno: %c ", i + 1, nome[i]);
	
	for (j = 0; j < 3; j++) {
		printf("\n%dª nota: %.1f ", j + 1, numeros[i][j]);
		//printf("\nmedia: %.1f ", media, numeros[j]);		
	}
	printf("\nmedia: %.2f ", media[i]);
	
	if (media[i] >= 7) {
	printf("aprovado");
	} else if (media[i] >= 5 && media[i] <= 6.9) {
	printf("recuperação");
	} else {
	printf("reprovado");
	}
}

return  0;
}
