#include <stdio.h>


int main()
{
    int c = 0;
    int r = 0;
    int i = 0;
    int j = 0;


    for(c = 1; c <= 5; c++)
    {
        for( r = 0; r < (5-c); ++r)
        {
            
            printf(" ");

        }
        for( i = 1; i <= c; ++i)
        {
            printf("* ");

    
        }
        for( r = 0; r < (5-c); ++r )

        {
            printf(" ");

         }

        printf("\n");
    }

    return 0;   
}

