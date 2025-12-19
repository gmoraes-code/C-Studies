#include <stdio.h>

float set [121];                             //creates an array of [n] elements
int n = sizeof(set) / sizeof (set[0]);       //variable n to avoid manually change loop size
int display(void);      
int main(void)
{
    int x, y;
    float z;
    int cont = 0;
    for (y = 5; y >= -5; y--)
    {
        for (x = -5; x <= 5; x++)
        {
            z = ((x * x)+ y) / 2.0;
            set[cont] = z;
            cont++;
        }
    }
    
    display();
}

int display(void)                           //displays the set from element i to n
{
    int b = 0;                              //variable to store a value which will increase within the outside loop
    for (int i = 0; i < 11; i++)            //outside loop to repeat line generation
    {
        for(int a = b; a < b + 11; a++)     //inside loop to print lines
        {
            if (-5.0 < set[a] < -3.0 )
            {
                printf(" ");                //prints element [a] from the set
            }
            else if (-3.0 < set[a] < -1.0)
            {
                printf(". ");
            }
            else if (-1.0 < set[a] < 1.0)
            {
                printf("- ");
            }
            else if (1.0 < set[a] < 3.0)
            {
                printf("= ");
            }
            else if (3.0 < set[a] < 5.0)
            {
                printf("# ");
            }            
        }
        b += 11;                            //adds 10 to the variable, so each before the inner loop is executed, it starts with +10 
        printf ("\n");                      //symbols  · ◌ ○ ● ◍
    }
}
