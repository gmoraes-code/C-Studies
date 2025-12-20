#include <stdio.h>
#include <math.h>

float set [1089];                                                           //creates an array of [n] elements must be odd number   
int display(void);
const int g = 33;                                                           //g must be the sqrt of set size (also odd)
int main(void)
{
    int x, y;
    float z;
    int cont = 0;
    for (y = ((g - 1.0) / 2); y >= -((g - 1.0) / 2); y--)
    {
        for (x = -((g - 1.0) / 2); x <= ((g - 1.0) / 2); x++)
        {
            z = (sin(x) + cos(y));                                       //FUNCTION HERE
            set[cont] = z;
            cont++;
//          printf("(x: %i, y: %i), calc: %f \n", x, y, z);
        }
    }
          display();
}

int display(void)                                                      //displays the set from element i to n
{
    int b = 0;                                                         //variable to store a value which will increase within the outside loop
    for (int i = 0; i < g ; i++)                                       //outside loop to repeat line generation
    {
        for(int a = b; a < b + g; a++)                                 //inside loop to print lines
        {
            if (-2.5 < set[a] < -1.5 )
            {
                printf("  ");                                         //prints element [a] from the set
            }
            else if (-1.5 < set[a] < -0.5)
            {
                printf(". ");
            }
            else if (-0.5 < set[a] < 0.5)
            {
                printf("- ");
            }
            else if (0.5 < set[a] < 1.5)
            {
                printf("= ");
            }
            else if (1.5 < set[a] < 2.5)
            {
                printf("# ");
            }            
        }
        b += g;                                                     //adds 10 to the variable, so each before the inner loop is executed, it starts with +10 
        printf ("\n");                                              //symbols  · ◌ ○ ● ◍
    }
}