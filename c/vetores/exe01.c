/* exercicio de leitura e escrita */
#include <stdio.h>

int main() {
    int n, i, j, k;
    scanf ("%d", &n);
    int v[n];

    /* le vetor */
    for (i= 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    /* imprime vetor original */
    printf("[");
    for (j= 0; j < (n-1); j++) {
        printf("%d ", v[j]);
    }
    printf("%d", v[j]);
    printf("]\n");

    /* imprime vetor invertido */
    printf("[");
    for (k= n-1; k > 0; k--) {
        printf("%d ", v[k]);
    }
    printf("%d", v[k]);
    printf("]");


    printf("\nfim programa\n");
    return 0;
}
