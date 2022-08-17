/*****

	Aluno: Alana Rodrigues Franzen
	Função do programa: Multiplicar duas matrizes 3x3


*****/
#include <stdio.h>
#include <string.h>

int main (){ //função principal
    int matri[3][3], matriF[3][3], x;
    printf("Insira cada item da matriz 1"); //Esclarece o ´pedido de informação seguinte
    for (int i = 0; i < 3; i++){ //Percorre a linha até o tamanho pedido
    	for (int j = 0; j < 3; j++){ //Percorre a coluna até o tamanho pedido
    		printf("[%d] [%d] :", i, j); // Esclarece qual item esta sendo inserido
    		scanf("%d", &matri[i][j]); // Recebe o numero no item da matriz
		}
	}
	printf("\nNumero inteiro: ");
	scanf("%d", &x);
	printf("Agora elas serao multiplicadas.\n"); // Print explicando a utilidade que ocorrerá
	
	for(int linha = 0; linha < 3; linha++){ //percorre a matriz
		for(int col = 0; col < 3; col++){
			matriF[linha][col] = matri[linha][col] *x; // Multiplica o item atual pelo numero inteiro
	        printf("%d    ", matriF[linha][col]); // Mostra o item atual final no terminal
		}
		printf("\n"); // Separa as linhas com quebra de linha;
	}
    return 0;
}
