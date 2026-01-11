#include <stdio.h>
#include <string.h>

int encrypt(void);
char name[20];
int i;
int N;  //Caesar's factor
int parameter_geter(void);
int main(void)
{
    printf("What's your name? ");
    scanf("%s", name);
    printf("Hello!, %s\n", name);
    printf("First letter: %c \n", name[0]);

    parameter_geter();
    encrypt();
    printf("Cryptic name: %s", name);
}

int parameter_geter(void)
{
    printf("Parameter size:");
    scanf("%i", &N);
}

int encrypt(void)
{
    for (i = 0; i < strlen(name); i++)
    {
        name[i] = name[i] + N;
    }
}

