/***

Aluna: Alana Rodrigues Franzen

***/
#include <stdio.h>
#include <stdbool.h>
int main () { //Função principal
	int A[3][3], B[3][3];  //Cria duas matrizes 3x3
	printf("Matriz A:\n"); //Clarifica
	for (int i = 0; i < 3; i++){ // loop de linha da matriz
		for (int j = 0; j <3; j++){ // loop de item por linha
			A[i][j] = 1; // define item atual da A como 1
			B[i][j] = 2; // define item atual da B como 2
			printf("[%d] ", A[i][j]); //Imprime item atual da matriz A
		}
		printf("\n"); // Quebra de linha para imprimir matriz A
	}
	int *pontB[3][3], *pontA[3][3]; //Define duas matrizes de ponteiros correspondentes
	printf("Matriz B:\n"); // Clarifica que irá imprimir matriz B
	for (int i = 0; i < 3; i++){ // Loop de linha das matrizes
		for (int j = 0; j <3; j++){ // Loop de item por linha das matrizes
			pontA[i][j] = &A[i][j]; // Define item atual da matriz de ponteiros A como ponteiro para o item correspondente em A
			pontB[i][j] = &B[i][j]; // Define item atual da matriz de ponteiros B como ponteiro para o item correspondente em B
			printf("[%d] ", B[i][j]); // imprime item atual da matriz original B
		}
		printf("\n"); // Quebra de linha ao imprimir a matriz original B
	}
	printf("Matriz A:\n"); //Clarifica que irá imprimri a matriz A novamente
	for (int i = 0; i < 3; i++){ // Loop de linha
		for (int j = 0; j <3; j++){ // loop de item por linha
			pontA[i][j] = pontB[i][j]; // Define item atual da matriz A como o correspondente da B, atraves do ponteiro
		}
	}
	for (int i = 0; i < 3; i++){ // loop de linha
		for (int j = 0; j <3; j++){ // loop de itme por linha
			printf("[%d] ", A[i][j] ); // Imprime item atuald a matriz A
		}
		printf("\n"); // Quebra de linha ao imprimir matriz A
	}
}

