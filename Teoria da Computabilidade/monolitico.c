#include <stdio.h>

int main() {
    int n = 5, i = 1, soma = 0;
    
inicio:
    if (i > n) goto fim;
    soma += i;
    i++;
    goto inicio;

fim:
    printf("Soma: %d\n", soma);
    return 0;
}
