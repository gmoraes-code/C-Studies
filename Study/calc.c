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

    float r;
    r = (s-(d * (n-1)))/n;

    printf("%f", r);
}