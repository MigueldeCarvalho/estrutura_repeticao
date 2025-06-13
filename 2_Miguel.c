#include <stdio.h>

int main() {
    int n;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);
    
    for (int i = n; i >= 0; i--) {
        printf("%d\n", i);
    }
    return 0;
}