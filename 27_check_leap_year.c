#include <stdio.h>


int main()
{
    int remender = 0;
    int year = 0;
    int b = 4;

    printf(" Enter year:");

    scanf("%d", &year);

    remender = year % b;

    if( remender == 0 )
    {
        printf("%d is leap year\n", year);
    }
    else
    {
        printf("Normel year\n");
    }



    return 0;
}