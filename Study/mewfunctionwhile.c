#include <stdio.h>

int get_value(void);
void meow(int n); 

int main(void) 
{
    int times = get_value();
    meow(times); 
}

int get_value(void)
{
    int n;
    do
    {
        printf("Number: "); 
        scanf("%i", &n); 
    }
    while (n < 1);
    return n;
}

void meow(int a) 
{
    for (int i = 0; i < a; i++)
    {
        printf("meow\n");
    }
}