/***

Aluna: Alana Rodrigues Franzen

***/
#include <stdio.h>
#include <stdbool.h>
int main () {// fun��o principal
	float matriz[3][3]; // cria matriz 3x3
	for (int i = 0; i < 3; i++){ // percorre matriz por linha
		for (int j = 0; j <3; j++){ // Percorre matriz por item de linha
			matriz[i][j] = i + j; // Define o item atual da matriz como um certo numero, n�o importante
		}
	}
	for (int i = 0; i < 3; i++){ // percorre matriz por linha
		for (int j = 0; j <3; j++){ // percorre matriz por item de linha
			float *p = &matriz[i][j]; // Cria um ponteiro temporario apontando ao endere�o do item atual
			printf("%p , ", p); // Imprime o endere�o do ponteiro temporario
		}
		printf("\n"); // Quebra de linha ao imprimir endere�os
	}
} 
