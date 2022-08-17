/***

Aluna: Alana Rodrigues Franzen

***/
#include <stdio.h>
#include <stdbool.h>
int main () { // função principal
	bool aB = false; //Define variavel boolean
	int aInt = 1; //Define variavel integer
	float aF = 2.33; //Define variavel float
	char aCh = 'G'; //Define variavel char
	printf("Bool: %d, Int: %d,  Float: %f, Char: %c", aB, aInt, aF, aCh); //Imprime os valores de todas as variaveis
		
	bool *bB; // cria ponteiro do tipo bool
	int *bInt;// cria ponteiro do tipo int
	float *bF;// cria ponteiro do tipo float
	char *bCh;// cria ponteiro do tipo char
	
	bB = &aB; // Todos os abaixo atribuem as variaveis correspondentes aos ponteiros
	bInt = &aInt; // Idem
	bF = &aF; // Idem
	bCh = &aCh; // Idem
	
	*bB = true; // Muda o valor da variavel AB, atraves do ponteiro
	*bInt = 123; // usa o ponteiro para mudar a variavel aInt
	*bF = 6.99;// usa o ponteiro para mudar a variavel aF
	*bCh = 'h';// usa o ponteiro para mudar a variavel aCh
	printf("\nBool: %d, Int: %d,  Float: %f, Char: %c", aB, aInt, aF, aCh); // Imprime todas as variaveis, com suas mudanças
	
}
