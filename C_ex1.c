# include <stdio.h>
# include <stdlib.h>

int main(int argc, char *argv[])
{
        if (argc == 3) 
        {
                int width = atoi(argv[2]);
                int height = atoi(argv[1]);
                int perimeter = 2*(height + width);
                int area = (height * width);
                printf("the perimeter of the rectangle is %d\n",perimeter);
                printf("the area of the rectangle is %d\n",area);
                return(0);
        }
        else
        {
                printf("no data\n");
                return(0);
        }
}
