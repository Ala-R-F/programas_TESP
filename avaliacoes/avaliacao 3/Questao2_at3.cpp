/***

Aluna: Alana Rodrigues Franzen

***/
#include <stdio.h>
#include <stdbool.h>
int main () { // fun��o principal
	char a = 'g', b = 'g'; // Cria duas variaveis
	char *ap = &a; // Cria ponteiro corrrespondente a A
	char *bp = &b; // cria ponteiro corrrespondente a B
	if (ap > bp){ // Compara os endere�os de A e B
		printf("%p", ap); // Imprime o endere�o de A se esse for maior
	}
	else { // Caso B seja maior realiza a seguir:
		printf("%p", bp); // Imprime o endere�o de B se esse for maior
	}
	
}
