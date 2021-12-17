#include <stdio.h>
#include <stdlib.h>

int main ()
{
        int n = 4;
        for (int i = 0; i < n; i++)
        {
                for (int y = 0; y <= i; y++)
                {
                        for (int z = i; z < n; z++)
                        {
                                putchar(' ');
                        }
                        putchar('*');              
                        putchar(' ');  
                }
                putchar('\n');
        }
        return(0);
}
