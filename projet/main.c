#include <stdlib.h>
#include <stdio.h>

int main() {
    int num1;
    int num2;
    char operateur;

    printf("Choisissez un opérateur parmi les suivants (+, -, *, /, %%): ");
    scanf(" %c", &operateur);


    printf("Entrez le premier nombre entier: ");
    scanf("%d", &num1);

    printf("Entrez le deuxième nombre entier: ");
    scanf("%d", &num2);

    printf("num_1: %d\n", num1);
    printf("num_2: %d\n", num2);
    printf("operation: %c\n", operateur);

    if (operateur == '+') {
        printf("addition\n");
    } else if (operateur == '-') {
        printf("soustraction\n");
    } else if (operateur == '*') {
        printf("multiplication\n");
    } else if (operateur == '/') {
        printf("division\n");
    } else if (operateur == '%') {
        printf("modulo\n");
    } else {
        printf("L'opérateur n'est pas reconnu\n");
    }

    return 0;
}
