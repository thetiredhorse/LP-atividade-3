#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>


int main () {
	setlocale(LC_ALL, "portuguese");
	
int i = 0, opcao, telefone[5];
char nome [5][50];

do{
	printf("\n1 - adicionar telefone \n2 - encerrar");
	printf("\no que vai escolher?: ");
	scanf("%d",&opcao);
	

	switch (opcao) {
	case 1:
	fflush(stdin);
	printf("\ndigite o %d� nome: ", i + 1);
	scanf("%c",&nome[i]);
	
	fflush(stdin);
	
	printf("\ndigite o %d� telefone: ",  i + 1);
	scanf("%d",&telefone[i]);
	break;
	case 2:
	printf("\nmostrando resultados \n");
	for (i = 0; i < 5; i++){
	printf("\nnome da %d� pessoa: %s ", nome[i]);
	fflush(stdin);
	printf("\ntelefone %d� pessoa: %d ", telefone[i]);
}
	break;
	default:
	printf("\nop��o invalida");
	break;
	 }

} while (opcao != 2);


	return  0;
}
