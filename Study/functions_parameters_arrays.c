#include <stdio.h>

float average (int length, int array[]);
int get_int(void);
int main(void)
{
    printf("How many values? ");
    int N = get_int(); //Asks user for an input for N
    int scores [N]; //Creates an int array named "scores" with N values
    for (int i = 0; i < N; i++) //Loops user's input in order to get N inputs
    {
        printf("Score %i: ", i + 1);
        scores[i] = get_int();
    }
    printf("Average: %f\n", average(N, scores)); //Here, we are printing the average number with a placeholder %f which will display this value, while the float value will come from the average function
}
float average (int length, int array[]) //Defining the average function, which has two integer arguments, "length" and "array", correlated to "N" and "scores", respectively
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return sum / (float) length;
}

int get_int(void)                                  
{
    int n;
    scanf("%i", &n);
    return n;
}