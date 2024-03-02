#include <stdio.h>

int main()
{
    int a = 25;
    int b = 15;
    int max;

    max = (25 > 15)? 25:15;

    while (1)
    {
        if( max % a == 0 && max % b == 0)
        {
            printf(" Lcm is %d", max);
            break;
        }
        max++;
    }
    
    return 0;
}