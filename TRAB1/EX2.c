/*REPETIÇÃO Faça um programa em C que leia vários conjuntos de três valores reais em ordem crescente e
mostre para cada conjunto: sua soma, seu produto e sua média. O programa encerra quando não entrar um
conjunto com seus valores em ordem crescente.
*/

// Aluno : João Henrique Lopes § Matricula = 202511184

#include<stdio.h>

int main() {
    float v1, v2, v3;
    float soma, produto, media;

    printf("não digite valores em ordem crescente para parar");
    printf("Digite o valor 1:");
    scanf("%f\n", &v1);
    
    printf("Digite o valor 2:");
    scanf("%f\n", &v2);

    printf("Digite o valor 3:");
    scanf("%f\n", &v3);
    
    while (v1 < v2 && v2 < v3)
    {
        soma = v1 + v2 + v3;
        produto = v1 * v2 * v3;
        media = soma / 3;
        printf("%f\n", soma);
        printf("%f\n", produto);
        printf("%f\n", media);

    printf("não digite valores em ordem crescente para parar");
    printf("Digite o valor 1:");
    scanf("%f\n", &v1);
    
    printf("Digite o valor 2:");
    scanf("%f\n", &v2);

    printf("Digite o valor 3:");
    scanf("%f\n", &v3);
    

    }
    
}