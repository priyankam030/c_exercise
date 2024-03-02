#include <stdio.h>

void print_fab_series(int num);

int main()
{   
    int a = 0;

    printf("Enter a number: ");
    scanf("%d", &a);
    print_fab_series(a);

    return 0;
}


void print_fab_series(int num)
{
    int prev_1 = 0;
    int prev_2 = 1;
    int i = 0;
    for( i = 1; i <= num; i++ )
    {
        if(i > 2)
        {
            int result = prev_1 + prev_2;
            if(i >= num)
            {
                printf("%d\n", result);
            }
            else
            {
                printf("%d ", result);
            }
            
            prev_1 =  prev_2;
            prev_2 = result;
        }

        if( i == 1 )

        {
            printf("%d ", prev_1);
        }

        if ( i == 2 )
        {
            printf("%d ", prev_2);
        }
    }
}