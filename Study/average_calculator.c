#include <stdio.h>

int get_quan(void);
int get_int(void);
int main(void)
{
    printf("How many values will be used? ");

    const int N = get_int();                       //Creating the variable N, which stores a value for the number of integers which will be averaged. It asks the user input for N
    int scores[N];                                 //Creating an Array of integers "scores", which will contain N
    int sum = 0;                                   //Creating the variable sum (which will be later used to store the sum of the N terms)
    for (int i = 0; i < N; i++)                    //Creating the loop which will be used: 
    {
        printf("Score %i Value: ", i+1);
        scores [i] = get_int();                    //(i) to ask the user for the N scores
        sum = sum + scores[i];                     //(ii) to count the value of the sum of the scores every time the user inputs a value.
    }
    printf("Average: %f\n", sum / (float) N);      //Print the value stored in the "sum" variable divided by N
}
int get_int(void)                                  //Simple get function (used to read and store user's inputs)
{
    int n;
    scanf("%i", &n);
    return n;
}

