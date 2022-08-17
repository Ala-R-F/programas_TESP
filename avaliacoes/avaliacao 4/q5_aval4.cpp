/******************************************************************************

Aluna: Alana Rodrigues Franzen
Finalidade: Analisar as notas de alunos e a média de exercícios, para
ter uma média ponderada e dizer seu conceito final.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float n1, n2, n3, me, ma; //Cria as variaveis para as notas inseridas e o resultado
    scanf("%f", &n1); // Apos isso, se atribue as notas
    scanf("%f", &n2);
    scanf("%f", &n3);
    scanf("%f", &me);
    
    ma = ((n1 + (n2*2) + (n3*3) + me)/7); // Aplica a formula da média ponderada com seus devidos pesos
    
    if (ma >= 9){ //Esses ifs julgam as notas e dão print a um conceito, e apenas um conceito pode ser impresso
        printf("\nConceito A"); // se a nota for acima de certo número, ela automaticamente imprime o conceito
        // do primeiro if que ela encontrar
        // Os conceitos são ordenados por maior nota para adquirir, portanto não é necessário limitar ( 7,5 até 9), apenas
        // (maior que 7,5) já que (maior que 9) já foi visto e não verá o outro.
    }
    else if (ma >= 7.5){ // cada else if possui um conceito
        printf("\nConceito B");
    }
    else if (ma >= 6){
        printf("\nConceito C");
    }
    else if (ma >= 4){
        printf("\nConceito D");
    }
    else {
        printf("\nConceito E");
    }
    
    
    return 0;
}
