#include <stdio.h>
#include <stdlib.h>

int main()
{
        //setting up variables and pointer z 

        int m = 10;
        int n, o;
        int *z = &m;

        printf("pointer : show the basic declaration of pointer\n");

        //just a little loop to print the bar 

        for (int i = 0;i < 50; i++)
        {
                putchar('-');
        }

        //here is all the text 

        printf("\n");
        printf("z stores the address of m = %p\n",z);
        printf("*z stores the value of m = %d\n",*z);
        printf("&m is the address of m = %p\n",&m);
        printf("&n stores the address of n = %p\n",&n);
        printf("&o stores the address of o = %p\n",&o);
        printf("&z stores the address of z = %p\n",&z);

        return(0);
}
