    #include <stdio.h>

    void ordena_selecao(int vetor[], int tamanho)  
    {  
        int i, j, menor, troca; 
        for (i = 0; i < (tamanho-1); i++)
        { 
            menor = i; 
            for (j = (i+1); j < tamanho; j++) { 
                if(vetor[j] < vetor[menor]) { 
                    menor = j; 
                } 
            } 
            if (i != menor) { 
                troca = vetor[i]; 
                vetor[i] = vetor[menor]; 
                vetor[menor] = troca; 
            } 
        } 
    }

/*
Como funciona o Selection Sort?
Ideia principal:
O algoritmo percorre o vetor procurando o menor elemento e o coloca na posição correta, 
repetindo esse processo para todas as posições.


Passo a passo:

Para cada posição i do vetor (exceto a última), ele procura o menor elemento entre as posições i e o final do vetor.
Se encontrar um elemento menor, troca esse elemento com o da posição i.
Repete até o vetor estar ordenado.
*/