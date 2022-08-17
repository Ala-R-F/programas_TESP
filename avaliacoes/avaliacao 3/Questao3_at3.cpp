/***

Aluna: Alana Rodrigues Franzen

***/
#include <stdio.h>
#include <stdbool.h>
int main () { // Função principal
	int a = 5, b = 45, x; //Cria duas variaveis a serem usadas e uma auxiliar
	scanf("%d", &a); //Pede valor da variavel A
	scanf("%d", &b); // Pede valor da variavel B
	printf("Primeiro: %d, Segundo: %d", a, b); // Imprime valores originais das variaveis
	int *ap = &a; //cria ponteiro correspondente a A
	int *bp = &b; // Cria ponteiro corrrespondente a B
	int *xp = &x; // Cria ponteiro correspondente a auxiliar
	*xp = *ap; // Define o valor da auxiliar como o de A, através dos ponteiros
	*ap = *bp; // Define a variavel A com o valor de B, atraves do ponteiro correspondente
	*bp = *xp; // define a variavel B com o valor da auxiliar, atraves do ponteiro correspondente.
	printf("Primeiro: %d, Segundo: %d", a, b); // imprime valores finais e trocados
}
