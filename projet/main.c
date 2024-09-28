#include <stdlib.h>
#include <stdio.h>

int main() {
    int num1;
    int num2;
    char operateur;
    int result;
    float resultat;
    int resultmodulo;

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
        result = num1 + num2;
        printf("addition\n");
        printf("résultat: %d\n", result);
    } else if (operateur == '-') {
        result = num1 - num2;
        printf("soustraction\n");
        printf("résultat: %d\n", result);
    } else if (operateur == '*') {
        result = num1 * num2;
        printf("multiplication\n");
        printf("résultat: %d\n", result);
    } else if (operateur == '/') {
        if (num2 != 0) {
            resultat = (float)num1 / num2;
            printf("division\n");
            printf("résultat: %f\n", resultat);
        } else {
            printf("Erreur : il est impossible de diviser par zéro !\n");
        }
    } else if (operateur == '%') {
        if (num2 != 0) {
            resultmodulo = num1 % num2;
            printf("modulo\n");
            printf("résultat: %d\n", resultmodulo);
        } else {
            printf("Erreur : il est impossible de diviser par zéro pour le modulo !\n");
        }
    } else {
        printf("L'opérateur n'est pas reconnu\n");
    }

    return 0;
}
