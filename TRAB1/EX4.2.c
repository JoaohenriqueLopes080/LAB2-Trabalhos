/*
Exemplo: um município com 283 mil habitantes, 52 mil casos e 850 óbitos, tem uma incidência de 18374 
casos por 100 mil habitantes e uma mortalidade de 300 óbitos por 100 mil habitantes. 
Faça um programa em C que: 
a. Leia e preencha as quatro primeiras colunas da matriz; 
b. Calcule e armazene as duas últimas colunas da matriz; 
c. Imprima toda a matriz; 
d. Mostre qual o código do município que tem a maior mortalidade; 
e. Mostre qual o código do município que tem a maior incidência de casos. 
Cada um dos itens acima deve ser uma função separada.

a. A primeira coluna guarda o código do município;  
b. A segunda coluna guarda a quantidade de habitantes do município; 
c. A terceira coluna guarda o total de casos confirmados; 
d. A quarta coluna guarda o total de óbitos; 
e. A quinta coluna guarda a incidência de casos a cada 100 mil habitantes; 
f. A sexta coluna guarda a mortalidade a cada 100 mil habitantes. 

*/
#include <stdio.h>

void preencher4(int matriz[][6], int m) {

    for (int i = 0; i < m; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if (j == 0)
            {
                printf("Digite o codigo do Municipio na Matriz[%d][%d]\n", i,j);
                scanf("%d", &matriz[i][j]);

            } else if (j == 1)
            {
                printf("Digite a quantidade de habitantes do Municipio na Matriz[%d][%d]\n", i,j);
                scanf("%d", &matriz[i][j]);

            } else if (j == 2)
            {
                printf("Digite a quantidade total de casos confirmados do Municipio na Matriz[%d][%d]\n", i,j);
                scanf("%d", &matriz[i][j]);

            } else if (j == 3)
            {
                printf("Digite a quantidade total de óbitos confirmados do Municipio na Matriz[%d][%d]\n", i,j);
                scanf("%d", &matriz[i][j]);
        }
    }
 }
}

int calculo2(int matriz[][6],int  m) {
     int hab, casos, obito;
     int incidencia, mortalidade;

     for (int i = 0; i < m - 1; i++)
     {
        hab = matriz[i][1];
        casos = matriz[i][2];
        obito = matriz[i][3];

        incidencia = 
        mortalidade =

        matriz[i][4] = incidencia;
        matriz[i][5] = mortalidade;

     }
     

     
     
    


}

void printar(int matriz[][6], int m){
    int i, j;

    for(i = 0; i < m;i++){
        printf("\n");
        for ( j = 0; j < 6; j++)
        {
            printf("%d,", matriz[i][j]);
            
        }
    }
}

void printincidencia(int matriz[][6], int m){
    int i, incidencia = 0, linha;

  
    for (i = 0; i < m; i++) {
        if (matriz[i][4] > incidencia) {
            incidencia = matriz[i][4];
            linha = i;
        }
    }
    printf("Matriz[%d][4]\n", linha);
    printf("Maior incidencia: %d", incidencia);
}

void printmortalidade(int matriz[][6], int m){
    int i, mortalidade = 0, linha;

  
    for (i = 0; i < m; i++) {
        if (matriz[i][5] > mortalidade) {
            mortalidade = matriz[i][5];
            linha = i;
        }
    }
    printf("Matriz[%d][5]\n", linha);
    printf("Maior Mortalidade: %d", mortalidade);
}




int main() {
      int i, j;
    int m;

    printf("Digite a quantidade de municipios");
    scanf("%d", &m);

    int matriz[m][6];

    preencher4(matriz, m);

    calculo2(matriz, m);

    printar(matriz, m);

    printmortalidade(matriz, m);

    printincidencia(matriz, m);

}