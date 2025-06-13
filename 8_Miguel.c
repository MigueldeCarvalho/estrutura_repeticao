#include <stdio.h>

int main() {
    float num, soma = 0;

    for (int i = 0; i < 8; i++) {
        printf("Digite um número: ");
        scanf("%f", &num);
        soma += num;
    }

    printf("Média: %.2f\n", soma / 8);

    return 0;
}