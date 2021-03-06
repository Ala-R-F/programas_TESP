/****************************************************************************** 

Código que simula uma calculadora que faz a soma de dois número, mas precisa estar ligada para funcionar.

*******************************************************************************/ 

  

#include <stdio.h> // Inclue a biblioteca de input

int state; // define variavel global

int ligar() // função que liga calculadora
{
    if(state==0){ //Se o estado for de desligado fara as instruções abaixo
        state = 1; //Estado considerado "ligado" é definido
        printf("Ligando calculadora...\n");  //Print que esclarece para o usuário a função.
    }
}

int soma(int a, int b){  //Função que soma dois números, que são os dois argumentos integer dados
    int resultSoma; // Define a variavel em que ficará o resultado
    if (state == 0){ // Se a calculadora está desligada, impede o calculo
        printf("Você não tinha ligado a calculadora antes...\n");  //Print esclarecedor, dizendo que precisa de state = 1
        return 0; // Retorna 0, que é considerado erro de calculo
    } 
    else{ // No caso que a calculadora esteja não desligada, realiza as instruções principais da função
        resultSoma= a + b; //Calcula a soma dos números dados
        return resultSoma; //Retorna a soma quando a função for chamada
    } 
}

int main(){ //Função principal do código
    int num1, num2, result; //Define locais para armazenar os números dados pelo usuário e a resposta
    state = 0; //Define que o programa começa com a calculadora desligada
    printf("Veja a calculadora!\nDiga 2 números:\n"); //Pede para que o usuário diga os números
    ligar(); //Liga a calculadora. Retire esta linha para que haja erro e realize a outra parte do código.
    scanf("%d", &num1); //Define o primeiro número
    scanf("%d", &num2); //Define o segundo número
    result = soma(num1, num2); //Calcula o resultado atráves da função soma, e armazena no result
    
    if (result != 0){ //Verifica se não houve erros no cálculo, o que retornaria 0
        printf("Soma = %d \n", result); //Mostra a soma apr ao usuário
    }
    else { //Realiza as intruções abaixo se houveram erros
        printf("Vamos tentar de novo então...\n"); //Diz par ao usuário que se tentará novamente
        ligar(); //Liga a calculadora
        result = soma(num1, num2); //Realiza o calculo da soma novamente, que não dará erros por que está ligado
        printf("Soma = %d", result); //Mostra o resultado par ao usuário
    }
    return 0; //Retorno necessário da int main()
}
