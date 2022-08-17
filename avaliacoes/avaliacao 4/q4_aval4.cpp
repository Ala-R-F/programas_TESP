/******************************************************************************

Aluna: Alana Rodrigues Franzen
Finalidade: Ler uma matriz 3x3 e mostrar a matriz da ordem inversa.

Nota: Ao invés da formula normal, usei um truque de matemática
informado em um video para inverter matrizes 3x3.

*******************************************************************************/

#include <stdio.h>

void printMatriz(int matriz[3][3]){ // Função para mostrar matrizes 3x3, que ocorre várias vezes no código
    
    for (int i = 0; i < 3; i++){ // Os fors percorrem cada item para dar print
	    for (int j = 0; j < 3; j++){
	        printf("%d ", matriz[i][j]);
	    }
	    printf("\n");
	}
}

int main() // Corpo principal do código
{
    int matri[3][3], matriF[3][3]; 
    
    printf("Insira cada item da matriz 1\n"); //Esclarece o pedido de informação seguinte
    for (int i = 0; i < 3; i++){ //Percorre a linha até o tamanho pedido
    	for (int j = 0; j < 3; j++){ //Percorre a coluna até o tamanho pedido
    		printf("[%d] [%d]: ", i, j); // Esclarece qual item esta sendo inserido
    		scanf("%d", &matri[i][j]); // Recebe o numero no item da matriz
		}
	}
	
	/* Matrizes para teste, comentadas:
	int matri[3][3] = {2,1,1,3,2,1,2,1,2};
	int matri[3][3] = {1,2,3,0,1,4,5,6,0};
	int matri[3][3] = {1,0,-2,4,1,0,1,1,7};
	*/
	
	printf("\n\n-= MATRIZ ESCOLHIDA =-\n");
	printMatriz(matri); //Da print da matriz 3x3 na tela através da outra função

	
	printf("\nA conta esta sendo feita....\n----CONTAS---");

	int matriTemp[5][5]; //Define uma matriz extendida 5x5 que será usada para calculos que envolvem voltar
	// ao início da matriz.
	
	
	for (int i = 0; i<5; i++){ //Esses fors preenchem a matriz extendida com 2 linhas copiadas do inicio, tanto lado quando altura
        // Exemplo:
        // 1 2 3  ->  1 2 3 1 2
        // 4 5 6      4 5 6 4 5
        // 7 8 9      7 8 9 7 8
        //            1 2 3 1 2
        //            4 5 6 4 5
	    for (int j = 0; j<5; j++){
	        if (j < 3 && i < 3){ // Caso esteja nas primeiras linhas e primeiras colunas, copiará normalmente
	            matriTemp[i][j] = matri[i][j];
	        }
	        else if(j >= 3 && i < 3){
	            matriTemp[i][j] = matri[i][j-3]; // Caso esteja ans primeiras linhas e novas colunas, copiará 3 colunas atras.
	        }
	        else {
	            matriTemp[i][j] = matriTemp[i-3][j]; // Caso esteja nas ultimas linhas, copiará as primeiras linhas de si mesma.
	        }
	    }
	}
	printf("\n");
	
	int colM, linM; //Define variaveis que serão usadas para percorrer a matriz extendida paralelamente
	// à percorrer matriz antiga
	colM = 1; // Ambas começam como 1 para pular a primeira linha e primeira coluna sempre
	linM = 1;
	
	//A matriz final é ordenada por coluna, enquanto os calculos da matriz extendida devem ocorrer por linha,
	//então é preciso ter um contador [i][j] para uma matriz e outro [i][j] para outra.
	
	for (int i = 0; i<3; i++){ // Esse for percorre a matriz final e a preenche com calulos feitos na matriz extendida
	    for (int j = 0; j<3; j++){
	        printf(" [%d * %d] ", matriTemp[linM][colM], matriTemp[linM+1][colM+1]);
	        matriF[i][j] = matriTemp[linM][colM] * matriTemp[linM+1][colM+1]; //Multiplica o item atual (da matriz extendida) com o item de uma coluna e uma linha depois dele
	        printf(" = [%d] ...", matriF[i][j]);
	        matriF[i][j] = matriF[i][j] - (matriTemp[linM+1][colM] * matriTemp[linM][colM+1]); // Multiplica o item de uma coluna depois do item atual com o de uma linha depois do item atual, e depois subtrae ele do resultado da última conta.
	        printf(" - [%d * %d] ", matriTemp[linM+1][colM], matriTemp[linM][colM+1]);
	        printf(" = %d || ", matriF[i][j]);
	        linM++; // Aumenta a linha da matriz extendida, enquanto o final desse for aumentará a coluna da matriz final
	        // Exemplo:
	        // 1 2  ->  1 * 4 = 2  ->  2 - 6 = -4
	        // 3 4      2 * 3 = 6
	    }
	    printf("\n");
	    colM++; //Aumenta a coluna da mattriz extendida, enquanto o final desse for aumentará a linha da matriz final

	    linM = 1; //Reseta a linha da matriz extendida para 1, aind apulando a primeira linha
	}
	
	printf("\n ---DETERMINANTES---\n");
	int determinante = 0; // O determinante dividirá a matriz final depois de ser calculado
	
	//Abaixo calcula diagonais no sentido da direita:
	for (int i = 0; i < 3; i++){ // Esse for percorre a diagonal da matriz original atraves da extendida, já que se deve voltar ao inicio da matriz original quando não há itens o suficiente
        // Nesse caso i percorre a coluna, 3 vezes (ao invés de percorrer a linha como é normal)
	    int temp = 1; //Variavel auxiliar que começa como 1 para não influenciar as contas de multiplicação
	    colM = i; // Variavel paralela a i, para começar a proxima conta a partir da coluna em que i começar
    	for (int j = 0; j < 3; j++){ //Percorre por linha
    	    temp = temp * matriTemp[j][colM]; //Multiplica pelo item atual, que é uma coluna e uma linha depois do antigo
    	    colM++; //Aumenta a coluna
    	    
    	    //Exemplo de seleção:
    	    // [1]  2   3   1  2
    	    //  4  [5]  6   4  5
    	    //  7   8  [9]  7  8
    	    
    	}
    	determinante = determinante + temp; //Adiciona essa multiplicação ao calculo da diagonal pela direita
	}
	
	int determinante2 = 0;
	//Abaixo calcula diagonais no sentido da esquerda:
	// É apenas uma modificação do código anterior para mover na direção contrária.
	for (int i = 4; i > 1; i--){ //Funciona 3 vezes, começando pelo item de index 4 para começar da direita e ir apra a esquerda
	    int temp = 1;
	    colM = i;
    	for (int j = 0; j < 3; j++){ //Não se altera por que a linha ainda flue de cima para baixo
    	    temp = temp * matriTemp[j][colM];
    	    colM--; //Diminue a variavel paralela de colM ao inves de aumentar, já que i está diminuindo a coluna também
    	}
    	determinante2 = determinante2 + temp;
	}
	
	printf("\nDiagonais: %d, %d", determinante, determinante2);
	determinante = determinante + (-determinante2); //Calcula o determinante atráves da subtração dos calculos das diagonais
	printf("\nDeterminante final: %d\n",determinante);
	
	for (int i = 0; i < 3; i++){ //percorre a matriz final
	    for (int j = 0; j < 3; j++){
	        matriF[i][j] = matriF[i][j] / determinante; // Divide todos os items pelo determinante
	    }
	}
	
	printf("\n\n -= MATRIZ INVERTIDA =-\n");
	printMatriz(matriF);  // Dá print na matriz 3x3 através da função já definida
	
    return 0;
}