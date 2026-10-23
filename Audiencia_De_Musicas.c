
#include <stdio.h>

int main() {
    int reproducoes[10] = {1250, 3400, 850, 5200, 2100,
                           4750, 1600, 6300, 980, 2850};
    int temp;

    // Exibindo os dados originais
    printf("Reproducoes originais das musicas:\n");

    for (int i = 0; i < 10; i++) {
        printf("Musica %d: %d reproducoes\n",
               i + 1, reproducoes[i]);
    }

    // Bubble Sort - ordem crescente
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (reproducoes[j] > reproducoes[j + 1]) {
                temp = reproducoes[j];
                reproducoes[j] = reproducoes[j + 1];
                reproducoes[j + 1] = temp;
            }
        }
    }

    // Exibindo os dados em ordem crescente
    printf("\nReproducoes em ordem crescente:\n");

    for (int i = 0; i < 10; i++) {
        printf("Musica %d: %d reproducoes\n",
               i + 1, reproducoes[i]);
    }

    // Bubble Sort - ordem decrescente
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (reproducoes[j] < reproducoes[j + 1]) {
                temp = reproducoes[j];
                reproducoes[j] = reproducoes[j + 1];
                reproducoes[j + 1] = temp;
            }
        }
    }

    // Exibindo os dados em ordem decrescente
    printf("\nReproducoes em ordem decrescente:\n");

    for (int i = 0; i < 10; i++) {
        printf("Musica %d: %d reproducoes\n",
               i + 1, reproducoes[i]);
    }

    return 0;
}
