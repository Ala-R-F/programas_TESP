/*

Aluna: Alana Rodrigues Franzen

Programa que acha a posição de um caractere em uma string

*/

#include <stdio.h>

int main(){
	
	char str[100], ch;
	int existe = 0;
	printf("Fale uma String:\n");
	gets(str);
	printf("\nFale um caractere para achar a posicao.");
	scanf("%c", &ch);
	
	printf("\n\nA posicao dele eh (ou sao):");
	for(int i = 0; i < 100; i++){ //Percorre a string
		if(str[i] == '\0'){ //verifica se o caractere atual é final de string e quabra loop
			break;
		}
		if (str[i] == ch){ //Verifica se a letra atual é a mesma que a letra pedida
			printf("\n%d;", i); // Imprime a posição para que o usuario veja
			existe = 1; //Define que o caractere existe na string
		}
		
	}
	if(existe == 0){ //Verifica se não há esse caractere na string
		printf("\nNao ha esse caractere na frase");
	}
	
	return 0;

}
