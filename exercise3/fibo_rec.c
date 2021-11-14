# include <stdio.h>
# include <stdlib.h>

unsigned long fibo_rec(unsigned n)
{
        if (n < 2)
                return n;
        return fibo_rec(n-1) + fibo_rec(n-2);
}
int main( int argc, char *argv[])
{
        printf("%ld \n",fibo_rec(atoi(argv[1])));
        return(0);
}
