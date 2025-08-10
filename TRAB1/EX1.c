#include <stdio.h>


float calculoP() {
    float p1, p2, p3;
    float maior, media;

        printf("Digite a Nota P1: ");
            scanf("%f", &p1);

        printf("Digite a Nota P2: ");
            scanf("%f", &p2);

        media = (p1 + p2) / 2;

        if(media >= 5 && p1 >= 3 && p2 >= 3){
            printf("%f", media);
            return 1;
        } else {
            printf("Digite a nota da P3:");
            scanf("%f", &p3);

            // nota maior da p1 or p2

            maior = p1;
            if(p1 < p2)
                maior = p2;

            media = (maior + p3) / 2;

            if(media >= 5){
                printf("%f\n", media);
                return 1;
            } else {
            printf("%f\n", media);
            return 0;
        }
    }
  }


int main() {

    int verificador;

    verificador = calculoP();

    switch(verificador) {
    case 0:
        printf("\nReprovado");
        break;

    case 1:
        printf("\nAprovado");
        break;

    default:
        printf("Invalid");
        break;
    return 0;
  }
}
