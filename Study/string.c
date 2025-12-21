#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[15];
    printf("What's your name? ");
    scanf("%s", name);
    printf("Hello!, %s\n", name);
    printf("First letter: %c \n", name[0]);
    int N = 10001;
    int i;
    for (i = 0; i < strlen(name); i++)
    {
        name[i] = name[i] + N;
    }
    printf("Cryptic name: %s", name);
}