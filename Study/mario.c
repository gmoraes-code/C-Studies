#include <stdio.h>

int get_n(void);
int n;
void print_row(int n); //Declaring the function
int main(void)
{
    get_n();
    for(int i = 0; i < n; i++) //A simple loop which prints a column of # characters
    {
        print_row(n);    
    }
}

void print_row(int n) //The function which prints #
{
    for(int j = 0; j < n; j++)
    {
        printf("#");
    }
    printf("\n");    
}

int get_n(void)
{
    printf("Value of n:");
    scanf("%i", &n);
}