#include <stdio.h>

int sum(int t[], size_t len) {
        int   r = 0;
        int  *end = t + len;
        for (int *i = t; i != end; ++i)
                r += *i;
        return r;
}
int main ()
{
        int v[1,2,3]       
        printf("%d",sum(v,3));
        return(0);
}


