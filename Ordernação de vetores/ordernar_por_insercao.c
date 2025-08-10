#include <stdio.h>

void ordenaPorInsercao(int V[], int tam)
{    
    int i, j, aux; 
 
    for(i = 1; i < tam; i++){ 
        j = i; 
 
        while((j != 0) && (V[j] < V[j - 1])) { 
            aux = V[j]; 
            V[j] = V[j - 1]; 
            V[j - 1] = aux; 
            j--;     
        } 
    } 
}

/*
A ordenação por inserção (insertion sort) é um algoritmo simples e intuitivo para ordenar vetores. Ele funciona assim:

Começa do segundo elemento do vetor.
Para cada elemento, compara com os anteriores e move para a posição correta.
Repete até o vetor estar ordenado.
Imagine organizar cartas na mão: você pega uma carta e insere no lugar certo entre as que já estão ordenadas.
*/

