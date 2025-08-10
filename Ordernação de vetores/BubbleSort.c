#include <stdio.h>

void BubbleSort(int vetor[], int tamanho)
{ 
    int aux, i, j; 
 
    for(j = tamanho - 1; j >= 1; j--)
    { 
        for(i = 0; i < j; i++)
        { 
            if(vetor[i] > vetor[i+1])
            { 
                aux = vetor[i]; 
                vetor[i] = vetor[i+1]; 
                vetor[i+1] = aux; 
            } 
        } 
    } 
}


/*
O algoritmo Bubble Sort é um método simples de ordenação usado para organizar elementos em um vetor (array). 
Ele funciona comparando pares de elementos adjacentes e trocando-os de posição se estiverem na ordem errada.
Esse processo é repetido várias vezes até que o vetor esteja totalmente ordenado.

Passo a passo do Bubble Sort
Comparação: O algoritmo percorre o vetor, comparando cada elemento com o próximo.
Troca: Se o elemento atual for maior que o próximo, eles trocam de posição.
Repetição: Após cada passagem, o maior elemento "bolha" para o final do vetor.
Iteração: O processo se repete, ignorando o último elemento já ordenado, até que todo o vetor esteja ordenado.
Exemplo visual
Suponha o vetor: [5, 3, 4, 1]

1ª passagem: [3, 4, 1, 5]
2ª passagem: [3, 1, 4, 5]
3ª passagem: [1, 3, 4, 5] (ordenado)
Pontos importantes
Complexidade: O Bubble Sort tem complexidade O(n²), ou seja, não é eficiente para grandes conjuntos de dados.
Simples de implementar: É útil para aprender conceitos básicos de ordenação.
Estável: Mantém a ordem relativa de elementos iguais.
*/

