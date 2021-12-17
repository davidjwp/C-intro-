#include<stdio.h>
#include<stdlib.h>

int main() {
        char letter = 'A';
        for (int i = 0; i < 26; ++i) 
        {        
                printf("%d\n", letter);
                letter++;        
        }
        return 0;
}
