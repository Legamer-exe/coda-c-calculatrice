#include <stdlib.h>
#include <stdio.h>

int main() {
    int num1;
    int num2;
    char operateur;

    printf("choisissez un opérateur parmi les suivants (+, -, *, /, %%): ");
    scanf(" %c", &operateur);

    printf("entrez le premier nombre entier: ");
    scanf("%d", &num1);

    printf("entrez le deuxième nombre entier: ");
    scanf("%d", &num2);

    printf("num_1: %d\n", nombre1);
    printf("num_2: %d\n", nombre2);
    printf("operation: %c\n", operateur);

    return 0;
}
