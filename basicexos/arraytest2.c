#include <stdio.h>
#include <stdlib.h>

int main ()
{
        int a[3][3] =   {
                {1,2,3},
                {4,5,6},                        
                {7,8,9}
        };

        for (int i = 0; i < 3; i++)
        {
                for (int n = 0; n < 3; n++)
                {
                        printf("%d,",a[i][n]);
                }
                printf("\n");
        }
        return(0);
}
