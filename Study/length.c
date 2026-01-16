#include <stdio.h>

int length(void);
void get_user_name(char name[], int size);
char my_name[50]; 

int main(void)
{
    get_user_name(my_name, 50); 
    printf("Ola, %s!\n", my_name);
    length();
}

void get_user_name(char name[], int size)
{
    printf("Qual o seu nome? ");
    scanf("%s", name); 
}

int length(void)
{
    int n = 0;
    while (my_name[n] != '\0') //Here, we set a loop which counts the number of characters and store this number in the variable n, although verbose, its purpose is to display the length of the array
    {
        n++;
    }
    printf("Seu nome possui %i caracteres.\n", n);
    return 0;
}