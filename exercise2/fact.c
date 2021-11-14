# include <stdio.h>
# include <stdlib.h>

unsigned long fact(unsigned n)
{
        unsigned long res = 1;

        for (unsigned i = 1; i < n; i++)
        {
                res = i * res;
        }
        return(res);
}

int main(int argc, char *argv[])
{
        printf("%ld\n",fact(atoi(argv[1])));
        return(0);
}
