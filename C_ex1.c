# include <stdio.h>
# include <stdlib.h>

int main(int argc, char *argv[])
{
    int height = atoi(argv[1]);
    int width = atoi(argv[2]);
    if (argc == 3) 
    {
        for (int i =1;i < argc; ++i)
        {
            
            printf("the perimeter of the rectangle is %d\n",height);
            printf("the area of the rectangle is %d\n",width);
            return(0);
        }
    }
    else
        {
        printf("no data\n");
        return(0);
        }
}
