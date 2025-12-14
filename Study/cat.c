#include <stdio.h>

int main(void)
{
    int i = 0;
    while (i < 3) //"while" method to achieve loops
    {
        printf("Meow\n");
        i++;
    }

    for (int i=0; i < 3; i++) //"for" method to achieve loops
    {
        printf("meow\n");
    }
}

