#include <stdio.h>
#include <stdlib.h>

int main ()
{
        int n = 10;
        int x = n;
        for (int i = 0; i < n; i++)
        {
                for (int a = n; a > i; a--)
                {
                        putchar(' ');
                }
                for (int y = n; y == n; y--)
                {
                        putchar('*');
                        for (int b = 0; x <= n && b < i; ++b)
                        {
                                putchar('*');
                                putchar('*');
                        }
                }
                x = x - 1;
                putchar('\n');
        }
        return(0);
}
