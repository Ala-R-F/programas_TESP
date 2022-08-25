/***

Aluno: Alana Rodrigues Franzen
Função: Transformar decimal em binario

***/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int remain[100], temp; 
    printf("Insira um número decimal para converter para binario:\n");
    scanf("%d", &temp); // Recebe número para converter
    
    int i = 0; // i para fazer while (true)
    while (i != 999){ // while (true)
        remain[i] = temp % 2; //Dividir temp por 2 e armazenar o resto em uma lista
        remain[i+1] = 999; // O número depois do atual sera definido como o final
        temp = temp / 2; //Armazena o resultado da divisão
        if (temp == 0){ // Acaba o código se o resultado for 0
            break;
        }
        i++; //Aumenta o i, para lembrar o tamanho do número
    }
    int bin[i]; //Faz lista para inverter a ordem, cujo tamanho sera i
    int t = i + 1;
    printf("\n\n Seu número é: ");
    for(int a = 0; a < t; a++){ // Percorre a lista inversa pelo tamanho da lista original
        bin[a] = remain[i]; // Item atual da lista inversa é igual ao item atual (percorrido ao contrario) da lista original
        i = i - 1; // Diminue i, para percorrer a lista original ao contrario
        printf("%d", bin[a]);
    }
    
    
}
