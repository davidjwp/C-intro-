#include <stdio.h>
#include <stdlib.h>

int main ()
{
        int n = 15;
        int x = n;
        int z = n;
        for (int i = 0; i < n; i++)
        {
                for (int a = n; a > i; a--)
                {
                        putchar(' ');
                }
                for (int y = n; y == n; y--)
                {
                        putchar('*');
                        for (int b = 0; x <= n && b < i; b++)
                        {
                                putchar('*');
                                putchar('*');
                        }
                }
                x = x - 1;
                putchar('\n');
        }
        for (int i = 0; i < n - 1; i++)
        {
                for (int a = 0; a <= i + 1; a++)
                {
                        putchar(' ');
                }
                for (int y = n; y == n; y--)
                {
                        putchar('*');
                        for ( int b = n - 2; n != i && b > i; b--)
                        {
                                putchar('*');
                                putchar('*');
                        }
                }
                z = z - 1;
                putchar('\n');
                }
                return(0);
}
