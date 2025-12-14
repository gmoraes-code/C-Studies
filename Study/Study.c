#include <stdio.h>

int main(void)
{
    int x = 211; //Creating the integer variable x and defining it's value (211)
    int answer; //Creating the integer variable "answer"
    printf("What's the value of y? "); //Asking the User the value of y
    int y = scanf("%i", &answer); //Creating the integer variable y and assigning its value to the input of the user
    printf("y is equal to: %i\n", answer);
    if (x < y)
    {
	    printf("x is less than y\n");
    }
    else if (x > y)
    {
        printf("x is greater than y\n");
    }
    else if (x == y)
    {
        printf("x is equal to y\n");    
    }
}