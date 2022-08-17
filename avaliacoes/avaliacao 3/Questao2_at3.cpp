/***

Aluna: Alana Rodrigues Franzen

***/
#include <stdio.h>
#include <stdbool.h>
int main () { // função principal
	char a = 'g', b = 'g'; // Cria duas variaveis
	char *ap = &a; // Cria ponteiro corrrespondente a A
	char *bp = &b; // cria ponteiro corrrespondente a B
	if (ap > bp){ // Compara os endereços de A e B
		printf("%p", ap); // Imprime o endereço de A se esse for maior
	}
	else { // Caso B seja maior realiza a seguir:
		printf("%p", bp); // Imprime o endereço de B se esse for maior
	}
	
}
