/***

Aluno: Alana Rodrigues Franzen
Função: Transformar hexadecimal em decimal

***/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int numi, temp = 0, temp2;
    char str[100], strInv[100];
    printf("Insira um número hexadecimal para converter para decimal:\n");
    gets(str); //Recebe a string de hexadecimal
    
    for (int i = 0; i <100; i++){ //Calcula o qual final da string (tamanho dela)
        if (str[i] == '\0'){
            temp2 = i; //Armazena o tamanho da string em temp2
            break; //termina loop
        }
    }
    
    int u = 0; //Variavel que percorrerá outra lista em paralelo, na ordem inversa
    //Ou seja, o próximo for inverte a lista
    for (int i = temp2-1; i > -1; i--){ //Percorre a string do item final dela até o primeiro item
        strInv[u] = str[i]; //item atual da lista inversa é igual ao item da original percorrido na ordem contraria 
        u++;
    }
    int remain[temp2]; //Cria lista de tamanho igual a original que armazenará apenas números
    
    for(int i = 0; i< temp2; i++){ //Percorre a lista inversa e transforma caracteres em números correspondentes na lista remain
        if (strInv[i] == '0'){
            remain[i] = 0;
        }
        else if (strInv[i] == '1'){
            remain[i] = 1;
        }
        else if (strInv[i] == '2'){
            remain[i] = 2;
        }
        else if (strInv[i] == '3'){
            remain[i] = 3;
        }
        else if (strInv[i] == '4'){
            remain[i] = 4;
        }
        else if (strInv[i] == '5'){
            remain[i] = 5;
        }
        else if (strInv[i] == '6'){
            remain[i] = 6;
        }
        else if (strInv[i] == '7'){
            remain[i] = 7;
        }
        else if (strInv[i] == '8'){
            remain[i] = 8;
        }
        else if (strInv[i] == '9'){
            remain[i] = 9;
        }
        else if (strInv[i] == 'A' || strInv[i] == 'a'){ //Aceita numeros em maiusculo e minusculo
            remain[i] = 10;
        }
        else if (strInv[i] == 'B' || strInv[i] == 'b'){
            remain[i] = 11;
        }
        else if (strInv[i] == 'C' || strInv[i] == 'c'){
            remain[i] = 12;
        }
        else if (strInv[i] == 'D' || strInv[i] == 'd'){
            remain[i] = 13;
        }
        else if (strInv[i] == 'E' || strInv[i] == 'e'){
            remain[i] = 14;
        }
        else if (strInv[i] == 'F' || strInv[i] == 'f'){
            remain[i] = 15;
        }
    }
    
    for(int i = 0; i < temp2; i++){ // percorre remain para transformar cada número
        if (remain[i] == 999){
            break;
        }
        int pod = pow(16, i); // variavel que contém o poder de 16 atual (16^i)
        
        remain[i] = remain[i] * pod; // Multiplica o item atual pelo poder de 16 correspondente
        
        temp = temp + remain[i]; // adiciona o valor encontrado ao número final
        
    }
    
    printf("\n\n%d", temp);
}
