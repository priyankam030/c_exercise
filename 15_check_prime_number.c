#include <stdio.h>


int main()
{
    int num = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int i = 0;
    for ( i = 2; i <= (num/2); i++)
    {
        int remender = num % i;
        //printf("i %d,  num  %d   remainder  %d\n", i, num, remender);
        if (remender == 0)
        {
            printf("number is non prime\n");
            break;
        }
        
    }
        if (i>(num/2))
        {
            printf("number is prime\n");


        }





    return 0;
}