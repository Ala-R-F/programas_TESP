/***

Aluno: Alana Rodrigues Franzen
Fun��o: Reordenar uma lista de n�meros para ser decrescente

***/
#include <stdio.h>

int main(){
	int tam; //Variavel para que o usu�rio escolha quantos n�meros ir� inserir
	printf("Insira o tamanho de sua lista de n�meros:");
	scanf("%d", &tam);
	int a[tam]; //Cria lista do tamanho desejado
	printf("Insira os %d numeros.", tam);
	for(int i = 0; i < tam; i++){ // Percorre vetor para inserir valores
		scanf("%d", &a[i]);
		
	}
	
	for(int i = 0; i < tam; i++){ // Percorre vetor pelo item atual
		for(int j = 0; j < tam; j++){ // percorre vetor novamente, para comparar o item atual com todos outros items
			if (a[i] > a[j]){ // Se o item atual for menor que o item comparado, ir� fazer troca
				int temp = a[i]; //Armazena o item atual em uma temporaria
				a[i] = a[j]; // Substitue o item atual pelo outro item
				a[j] = temp; // Substitue o outro item pelo temporario, que era o item atual antigo
			}
		}
	}
	printf("\n\n Decrescente:\n");
	for(int i = 0; i < tam; i++){
		printf("%d\n", a[i]); //Mostra lista ordenada
	}
}
