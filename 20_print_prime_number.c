#include <stdio.h>


int main()
{
    int i = 0;
    int num = 0;
    int N = 0;

    printf("Enter the value of N: ");
    scanf("%d", &N);
   
    for (i = 1; i<=N; i++)
    {

        for(num = 2; num <= (i/2); num++)
        {
            int remender = i % num;

            if( remender == 0)
            {
                //printf("Prime is not number ");
                break;

            }
            
        }

        if (num>(i/2))
        {
            printf("%d\n", i);

        }
    
    }

    return 0;
}