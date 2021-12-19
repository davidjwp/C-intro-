#include <stdio.h>
#include <stdlib.h>

void array_min_max(int *array, size_t lenght)
{
        int max, min;

        max = array[0];
        min = array[0];

        for (int i = 0; i < lenght; ++i)
        {
                if (max < array[i])
                {
                        max = array[i];
                }       
                if (min > array[i])
                {
                        min = array[i];
                }
        }    
        printf("max = %d\nmin = %d\n",max,min);
        return;
}
int main ()
{

        int array1[8] = {1,2,4,8,2,0,48,-34};
        array_min_max(array1,8);
        return(0);
}
