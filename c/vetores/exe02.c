#include <stdio.h>

int main() {
    int n, i;
    scanf ("%d", &n);

    int v[n];

    /* le vetor */
    for (i = 0; i < n; i++) {
        scanf ("%d", &v[i]);
    }
    
    /* calcula soma e media dos valores lidos */
    int soma = 0, j;
    float media = 0.00;

    for (j= 0; j < n; j++) {
        soma= soma + v[j];
    }
    media= soma / n;
    printf("a soma e: %d\n", soma);
    printf("a media dos valores lidos e: %f\n", media);

    /* imprime os elementos que foram maior que a (media) */
    int k;
    printf("[");
    for (k= 0; k < n; k++) {
        if (v[k] > media) {
            printf("%d", v[k]);
        }
    }
    printf("]\n");
    printf("fim programa\n");
    return 0;
}
