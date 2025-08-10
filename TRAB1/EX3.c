/* 
3. VETORES Faça um programa em C que: 
a. Leia um vetor de inteiros de tamanho 5; 
b. Inverta e imprima este vetor (ex: o vetor 1 7 3 4 2 vira 2 4 3 7 1); 
c. Ordene e imprima este vetor em ordem decrescente; 
d. Calcule e imprima: 
i. O maior valor do vetor; 
ii. O menor valor do vetor; 
iii. A média de valores do vetor; 
iv. A quantidade de valores que são maiores do que a média de valores calculada no item iii. 
Cada um dos itens acima deve ser uma função separada.

Aluno : João Henrique Lopes
Matricula : 202511184
*/
#include <stdio.h>


int maiorvalor(){

}

int menorvalor(){

}

int mediavalor(){

}

int main() {
    int vetor[5], vetorextra[5];
    int i, j;
    int valoranterior, maiorvalor, menorvalor, media;

    // preenchendo vetor.
    for(i = 0; i <= 5 - 1; i++) {
        printf("Digite o valor para a posição %d", i);
        scanf("%d", &vetor[i]); 
    }  

    /*
    b. Inverta e imprima este vetor (ex: o vetor 1 7 3 4 2 vira 2 4 3 7 1); 

    */
    for(i = 0; i <= 4; i++) {
        vetorextra[i] = vetor[4 - i];
    }
        // print inverso
     for(i = 0; i <= 4; i++) {
            vetor[i] = vetorextra[j];
            printf("%d", vetor[i]);
        }

    //  c. Ordene e imprima este vetor em ordem decrescente; 

    maiorvalor = vetor[0];

    for(i = 0 ; i <= 4; i++) {
        if(maiorvalor < vetor[i + 1]) {

        }

    }
    
}

maiorvalor = vetor[0]
maiorvalor = posição 1

se maiorvalor for menor que vetor[i + 1] posição 2
então maiorvalor  = vetor[i + 1]
    entao menorvalor = vetor[i + 1]
    vetor[i] = menorvalor