#include <stdio.h>

void print_row(int n); //Declaring the function
int main(void) 
{
    const int n = 4; //Declaring a constant, a value attributed to n which will not change
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