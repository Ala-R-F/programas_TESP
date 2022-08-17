/*

Aluna: Alana Rodrigues Franzen

Programa que lê dois nomes e os mostra em ordem alfabética

*/


#include <ctype.h>
#include <stdio.h>

int main(){
	
	char nomeA[100], nomeB[100];
	int antesFinal = 0; // Variavel que designa o nome que virá antes no final
	
	printf("Insira nomes para ordenar alfabeticamente:\n");
	gets(nomeA); //Atribui os nomes
	gets(nomeB);
	
	for(int i = 0; nomeA[i]; i++){ //percorre a string para transformar eles em letra minuscula
		nomeA[i] = tolower(nomeA[i]);
	}
	for(int i = 0; nomeB[i]; i++){ // Faz o mesmo para a outra string
		nomeB[i] = tolower(nomeB[i]);
	}
	

	int ehigual = 0; //Variavel que lembra se houve letras iguais ou não
	for(int i = 0; i < 100; i++){ //percorre a string
	    ehigual = 0; // designa que atualmente, as letras são diferentes
		if ((nomeA[i] == nomeB[i]) && nomeA[i] != '\0' && nomeB[i] != '\0'){ // Verifica se a letra atual é igual, exceto se as duas forem finais de string
			ehigual = 1; // designa que as letras atualmente são iguais
			if (nomeA[i+1] == '\0'){ //Se as strings a ou b forem terminar no proximo caractere, para o loop
			    antesFinal = 1;
			    break;
			}
			else if (nomeB[i+1] == '\0'){
			    antesFinal = 2;
			    break;
			}
		}
		if(nomeA[i] == '\0' || nomeB[i] == '\0'){ //termina o for se uma das strings acabar depois da outra
			break;
			
		}
	}
		
	if (ehigual == 1 && antesFinal !=2){ // Ve se as palavras foram designadas iguais, além de não haver reordenação por uma ser menor que a outra, e avisa ao usuario que não haverá mudanças
		printf("\nNada ira mudar nessa ordenação.\n");
	}

	
	int i = 0; // i percorrerá a string como index
	int antes = 1, chIgual = 0;
	char temp[100]; //Variaveis auxiliares ao proximo processo
	
	if (antesFinal == 0){ // Caso o antesFinal não tenha sido designado pela verificação de serem iguais ou não
    	while(antes == 1){ // Percorrerá as strings, enquanto não for detectada mudança de ordem
    	    int a = (int)nomeA[i]; // armazenam a letra atual como ASCII para comparação
    		int b = (int)nomeB[i];
    		if(nomeA[i] == '\0'){ //Verifica se o caractere atal de A é finald e string
    		    antes = 1; //designa que 1 permanecera como primeira

    			break;
    		}
    		if(nomeB[i] == '\0'){ // O mesmo que acima, porém 
    			if (chIgual == 1){ //se anteriormente os caracteres eram iguais, designa que 2 será a primeira por que acabou antes
    				antes = 2;
    			}
    			break;
    		}
    		else if(a < b){ // Se o ascii da letra de A for menor do que o ascii da letra de b, quebra o loop
    			break;
    		}
    		else if(a == b)
    		{
    			chIgual == 1; // Define que atualmente, os caracteres são iguais
    		}
    		else{
    			antes = 2; //Define B como a primeira palavra, já que a > b. Logo, o loop acaba depois desse.
    			chIgual == 0; //Define que os caracteres não foram iguais nesse loop
    		}
    		i++; //Aumenta i, que percorre o index
    	}
	}
	
	if (antesFinal != 0){
	    antes = antesFinal; //Se antesFinal tiver sido definido no inicio, leva precedencia sobre a outra variavel antes
	}
	printf("\n\nO nome a aparecer primeiro eh o de numero: %d\n", antes);
	if (antes == 1){ // Apresenta os nomes na ordem A B se antes for 1
		printf("Os nomes nao mudaram de ordem.\n");
		printf("\nA ordem eh:\n%s\n%s", nomeA, nomeB);
	}
	else if (antes == 2){ // Apresenta os nomes na ordem B A se antes for 1
		printf("\nA ordem eh:\n%s\n%s", nomeB, nomeA);
	}
	
	
	return 0;
    
}

