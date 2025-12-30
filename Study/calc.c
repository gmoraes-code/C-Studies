#include <stdio.h>

int main(void)
{
    int n;
    printf("valor de n: ");
    scanf("%i", &n);

    int s;
    printf("tamanho (em px): ");
    scanf("%i", &s);

    int d;
    printf("valor da distância: ");
    scanf("%i", &d);

    float h;
    h = (s-(d * (n-2)))/n;

    printf("%f", h+2);
}