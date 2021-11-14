# include <stdio.h>
# include <stdlib.h>

unsigned long fact_recursion(unsigned n)
{
        if (n == 1)
                return 1;
        return fact_recursion(n-1) * n;

}
int main (int argc, char *argv[])
{
        printf("%ld\n",fact_recursion(atoi(argv[1])));

        return(0);
}
