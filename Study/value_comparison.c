#include <stdio.h>

int main(void)
{
    int x = 211; //Creating the integer variable x and defining it's value (211)
    int y_value; // Creating a clear integer variable to define y
    
    printf("What's the value of y? "); //Asking the User the value of y
    
    if (scanf("%i", &y_value) != 1) //scanf is responsible to read user's inputs, %i specifies the format and &y_value is the variable in which scanf will assign the value.
    {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }
    
    printf("y is equal to: %i while x is equal to: %i\n", y_value, x);

    if (x < y_value)
    {
        printf("x is less than y\n");
    }
    else if (x > y_value)
    {
        printf("x is greater than y\n");
    }
    else
    {
        printf("x is equal to y\n");    
    }
    
    return 0;
}