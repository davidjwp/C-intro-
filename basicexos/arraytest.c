#include <stdio.h>
#include <stdlib.h>

int main ()
{
        //declaring 2d array
        int a[3][3] = {{1,2,3},
                {4,5,6},
                {7,8,9}};

        //printf array
        for (int i = 0; i < 3; i++)
        {
                for (int n = 0; n < 3; n++)
                {
                        printf("array a[%d][%d] = %d\n",i,n,a[i][n]);
                }
        }

        return(0);
}
