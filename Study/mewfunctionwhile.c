#include <stdio.h>

void meow(int n); //Declares the existing meow function before it's use
int main(void) 
{
    int n; //Declares the variable n inside the main, so it can "exist" inside or outside the loop.
    do //Starts the loop do... while
    {
        printf("Number: "); //Displays a question for the user
        scanf("%i", &n); //Gets user's input and stores in the n variable
    }
    while (n < 1); //Puts a condition for the loop to run.
    meow(n); //Executes the function meow (n) times
}

void meow(int n) //Declares the function structure
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}