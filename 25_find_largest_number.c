#include <stdio.h>


int main()
{  
    int a = 19;
    int b = 18;
    int c = 13;

    printf("Enter number:\n" );

    scanf("%d%d%d", &a, &b, &c);

    {

        if ( a >= b && a >= c )
        {

            printf("Largest Number is %d\n ", a );

        }

        else if(b >= a && b >= c )
        {
            printf("Largest Number is %d\n", b );

        }

        else 
            printf("Largest Number is %d\n ", c );

    }
    return 0;
}