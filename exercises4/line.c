#include <stdio.h>
#include <stdlib.h>

int main()
{
        int n = 4;  
        for (int i = 0; i < n; i++)
        {
                for (int j = 0; j < n; j++)               
                {        
                        putchar('*');         
                }       
                putchar('\n');        
        }
        return(0);
}