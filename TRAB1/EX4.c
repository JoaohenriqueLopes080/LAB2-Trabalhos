/*
MATRIZES Faça um programa em C que armazene numa matriz de inteiros (de tamanho m x 6) os seguintes 
dados COVID referentes a m municípios: 
a. A primeira coluna guarda o código do município;  
b. A segunda coluna guarda a quantidade de habitantes do município; 
c. A terceira coluna guarda o total de casos confirmados; 
d. A quarta coluna guarda o total de óbitos; 
e. A quinta coluna guarda a incidência de casos a cada 100 mil habitantes; 
f. A sexta coluna guarda a mortalidade a cada 100 mil habitantes. 
 
 
Exemplo: um município com 283 mil habitantes, 52 mil casos e 850 óbitos, tem uma incidência de 18374 
casos por 100 mil habitantes e uma mortalidade de 300 óbitos por 100 mil habitantes. 
Faça um programa em C que: 
a. Leia e preencha as quatro primeiras colunas da matriz; 
b. Calcule e armazene as duas últimas colunas da matriz; 
c. Imprima toda a matriz; 
d. Mostre qual o código do município que tem a maior mortalidade; 
e. Mostre qual o código do município que tem a maior incidência de casos. 
Cada um dos itens acima deve ser uma função separada.
*/

#include<stdio.h>

int main(){
    int i, j;
    int m;

    printf("Digite a quantidade de municipios");
    scanf("%d", &m);

    int matriz[m][6];

    for (i = 0; i < m; i++)
    {
        for(j = 0; j < 6; j++)
        {
            if (j = 0)
            {
                printf("Digite o codigo do Municipio na Matriz[%d][%d]", i,j);
                scanf("%d", matriz[i][j]);

            } else if (j = 1)
            {
                printf("Digite a quantidade de habitantes do Municipio na Matriz[%d][%d]", i,j);
                scanf("%d", matriz[i][j]);

            } else if (j = 2)
            {
                printf("Digite a quantidade total de casos confirmados do Municipio na Matriz[%d][%d]", i,j);
                scanf("%d", matriz[i][j]);

            } else if (j = 3)
            {
                printf("Digite a quantidade total de óbitos confirmados do Municipio na Matriz[%d][%d]", i,j);
                scanf("%d", matriz[i][j]);

            } else if (j = 4)
            {
                printf("Digite a quantidade total de incidência de casos a cada 100 mil habitantes do Municipio na Matriz[%d][%d]", i,j);
                scanf("%d", matriz[i][j]);

            } else if (j = 5)
            {
                printf("Digite a quantidade total de mortalidade a cada 100 mil habitantes do Municipio na Matriz[%d][%d]", i,j);
                scanf("%d", matriz[i][j]);
            }
            
            
            
        }
        
    }
    
}