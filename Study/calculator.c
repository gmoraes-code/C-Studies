#include <stdio.h>
#include <string.h> //Lets the user use the string comparison tool.

int get_y(void);
int get_x(void);
int main(void)
{
    int x = get_x();
    int y = get_y();
    char op [4];
    printf("The value of X is %i, while the value of Y is %i.\n", x, y); 
    printf("Which operation do you choose? (sum, dif, mul, div)?");
    scanf("%s", op);
    if (op == "sum")
    {
        int n = x + y;
        printf("%i", n);
    }
    
}

int get_x(void)
{
    int n;
    printf("Value of X: ");
    scanf("%i", &n);
    return n;
}
int get_y(void)
{
    int n;
    printf("Value of Y: ");
    scanf("%i,", &n);
    return n;
}