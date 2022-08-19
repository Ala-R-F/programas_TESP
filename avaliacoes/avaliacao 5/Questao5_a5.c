/***

Aluno: Alana Rodrigues Franzen
Função: Achar se o número é primo

***/
#include <stdio.h>
#include <string.h>

int main(){
    int primo, num, temp, temp2;
    printf("Insira um número para ver se ele é primo: ");
    scanf("%d", &num); // recebe o número
    primo = 1; //Define como primo por padrão
    temp = num/2; // Divide o número em dois, para diminuir a quantidade de calculos, já que os divisores sempre serão menores que a metade do número
    temp2 = num;
    
    for (int i = (temp); i>1; i--){ //Começando a partir da metde do número original, testa todos os números menores que esse como divisores.
        if ((temp2 % i) == 0){ // verifica o resto da divisão, para saber se foi exata
            primo = 0; //Se foi, o número já não é primo
            break;
        }
    }
    
    if (num < 0){ //Numeros negativos não devem ser contados
        printf("\n\nEsse é negativo, então não podemos calcular.");
    }
    else if (primo == 1 && num != 1 && num != 0){ //1 e 0 não são números primos, apesar de aparecerem como primos na conta (exceções iniciais)
        printf("\n\nÉ primo.");
    }
    else {
        printf("\n\nNão é primo.");
    }

}
