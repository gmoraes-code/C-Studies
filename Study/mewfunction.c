#include <stdio.h>

void meow(int n); // Here we specify that the function, when called, requires an input n, which in this case will mean the number of times the loop will occur
int main(void)
{
    int n;
    printf("How many meows? \n"); // Ask the user how many meows they want
    scanf("%i", &n); // Ask the user for an integer input and store it in the variable n
    if(n > 0) //Conditional to the n value in order to display eventual mistakes.
    {
        meow(n); // Here we will specify how many times n (arbitrary, defined by the user) the function will be repeated in a loop
    }
    else
    {
        printf("Invalid input, please choose a valid number.");
    }

}
void meow(int n) // Here is the function's construction/definition
{
    for (int i = 0; i < n; i++) // Loop
    {
        printf("meow\n");
    }
}