#include <stdio.h>

int main() {
    int numero, incremento;
    
    printf("Digite o número: ");
    scanf("%d", &numero);
    printf("Digite o incremento: ");
    scanf("%d", &incremento);

    for (int i = 0; i <= numero; i += incremento) {
        printf("%d\n", i);
    }

    return 0;
}