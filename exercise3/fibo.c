# include <stdio.h>
# include <stdlib.h>

unsigned long fibo(unsigned n)
{
        unsigned long a;
        unsigned long b = 1;
        unsigned long c = 1;                
        if (n == 1 || n == 2)
                return (1);        
        for (unsigned i = 2; i < n; i++)
        {
                a = b + c;
                b = c;
                c = a;
                //printf("%lu \n", a); 
        }
        return(a);
}

int main(int argc, char *argv[])
{
        printf("%ld \n",fibo(atoi(argv[1])));
        return(0);
}
