#include <stdio.h>

int main()
{   
    int a = 23789;
    int digit_count = 0;
 
    while(a>10)
    {
        digit_count++;

        a = a / 10;
        
        if( a < 10 )
        {
            digit_count++;
        }
        
    } 

    printf("Number of digit is %d\n", digit_count);




    return 0;
}