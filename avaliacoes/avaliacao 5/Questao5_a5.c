/***

Aluno: Alana Rodrigues Franzen
Fun��o: Achar se o n�mero � primo

***/
#include <stdio.h>
#include <string.h>

int main(){
    int primo, num, temp, temp2;
    printf("Insira um n�mero para ver se ele � primo: ");
    scanf("%d", &num); // recebe o n�mero
    primo = 1; //Define como primo por padr�o
    temp = num/2; // Divide o n�mero em dois, para diminuir a quantidade de calculos, j� que os divisores sempre ser�o menores que a metade do n�mero
    temp2 = num;
    
    for (int i = (temp); i>1; i--){ //Come�ando a partir da metde do n�mero original, testa todos os n�meros menores que esse como divisores.
        if ((temp2 % i) == 0){ // verifica o resto da divis�o, para saber se foi exata
            primo = 0; //Se foi, o n�mero j� n�o � primo
            break;
        }
    }
    
    if (num < 0){ //Numeros negativos n�o devem ser contados
        printf("\n\nEsse � negativo, ent�o n�o podemos calcular.");
    }
    else if (primo == 1 && num != 1 && num != 0){ //1 e 0 n�o s�o n�meros primos, apesar de aparecerem como primos na conta (exce��es iniciais)
        printf("\n\n� primo.");
    }
    else {
        printf("\n\nN�o � primo.");
    }

}
