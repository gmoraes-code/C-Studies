#include <stdio.h>

int get_y(void);
int get_x(void);
int main(void)
{
    int x = get_x();
    int y = get_y();
    printf("The value of X is %i, while the value of Y is %i.\n", x, y);
    printf("Which operation do you choose? (sum, dif, mul, div)?");
}

int get_x(void)
{
    int n;
    printf("Value of X: ");
    scanf("%i,", &n);
    return n;
}
int get_y(void)
{
    int n;
    printf("Value of Y: ");
    scanf("%i,", &n);
    return n;
}
