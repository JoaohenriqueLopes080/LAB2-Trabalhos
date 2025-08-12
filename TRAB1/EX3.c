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
/*
3. VETORES
Faça um programa em C que:
a. Leia um vetor de inteiros de tamanho 5;
b. Inverta e imprima este vetor (ex: o vetor 1 7 3 4 2 vira 2 4 3 7 1);
c. Ordene e imprima este vetor em ordem decrescente;
d. Calcule e imprima:
   i. O maior valor do vetor;
   ii. O menor valor do vetor;
   iii. A média de valores do vetor;
   iv. A quantidade de valores que são maiores do que a média de valores calculada no item iii.
Cada um dos itens acima deve ser uma função separada.

Aluno: João Henrique Lopes
Matricula: 202511184
*/

#include <stdio.h>


void imprimirvetor(int vetor[], int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}


void inverter(int vetor[], int tamanho) {
    int aux, i;
    for (i = 0; i < tamanho / 2; i++) {
        aux = vetor[i];
        vetor[i] = vetor[tamanho - 1 - i];
        vetor[tamanho - 1 - i] = aux;
    }
}


void ordemdecrescente(int vetor[], int tamanho) {
    int i, j, aux;
    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - 1 - i; j++) {
            if (vetor[j] < vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

int maiorvalor(int vetor[], int tamanho) {
    int maior = vetor[0];
    int i;
    for (i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    return maior;
}

int menorvalor(int vetor[], int tamanho) {
    int menor = vetor[0];
    int i;
    for (i = 1; i < tamanho; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }
    return menor;
}


float mediavalor(int vetor[], int tamanho) {
    int i;
    float soma = 0;
    for (i = 0; i < tamanho; i++) {
        soma = soma + vetor[i];
    }
    return soma / tamanho;
}


int maiorquemedia(int vetor[], int tamanho, float media) {
    int i, count = 0;
    printf("Valores maiores que a média:\n");
    for (i = 0; i < tamanho; i++) {
        if (vetor[i] > media) {
            printf("%d ", vetor[i]);
            count++;
        }
    }
    printf("\nQuantidade de valores maiores que a média: %d\n", count);
    return count;
}

int main() {
    int vetor[5];
    int i, maior,menor;
    float media;
    int tamanho = 5;
    // a. Preenchendo vetor
    for (i = 0; i < tamanho; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\nSeu vetor: ");
    imprimirvetor(vetor, tamanho);

    // b. Inverta e imprima o vetor
    inverter(vetor, tamanho);
    printf("Vetor invertido: ");
    imprimirvetor(vetor, tamanho);

    // c. Ordene e imprima o vetor em ordem decrescente
    ordemdecrescente(vetor, tamanho);
    printf("Vetor em ordem decrescente: ");
    imprimirvetor(vetor, tamanho);

  
    maior = maiorvalor(vetor, tamanho);
    printf("Maior valor é: %d\n", maior);

    menor = menorvalor(vetor, tamanho);
    printf("Menor valor é: %d\n", menor);

   
    media = mediavalor(vetor, tamanho);
    printf("Média dos valores: %.2f\n", media);

    
    maiorquemedia(vetor, tamanho, media);

    return 0;
}
