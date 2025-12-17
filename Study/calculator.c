#include <stdio.h>

int get_int(void);
int main(void)
{
    int scores[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Score %i Value:", i+1);
        scores [i] = get_int();
    }
    printf("Average: %f\n", (scores [0] + scores [1] + scores [2]) / 3.0);
}
int get_int(void)
{
    int n;
    scanf("%i", &n);
    return n;
}

