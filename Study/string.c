#include <stdio.h>
#include <string.h>

int encrypt(void);
char name[15];
int N = 10001;
int i;
int main(void)
{
    printf("What's your name? ");
    scanf("%s", name);
    printf("Hello!, %s\n", name);
    printf("First letter: %c \n", name[0]);
    encrypt();
    printf("Cryptic name: %s", name);
}

int encrypt(void)
{
    for (i = 0; i < strlen(name); i++)
    {
        name[i] = name[i] + N;
    }
}