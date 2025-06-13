#include <stdio.h>

int main() {
    int num, maior;

    printf("Digite o número 1: ");
    scanf("%d", &maior); 

    for (int i = 2; i <= 10; i++) {
        printf("Digite o número %d: ", i);
        scanf("%d", &num);
        if (num > maior)
            maior = num;
    }

    printf("O maior número informado foi: %d\n", maior);

    return 0;
}