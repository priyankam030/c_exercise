#include <stdio.h>
#include <stdint.h>

int main()
{   
    int i = 0;
    uint64_t result = 1;
    int facto  = 0;

        printf("Enter a number: ");
        
        scanf("%d",&facto);


    for( i = 1; i <= facto; i++)
    {
        result = result * i;
     
    }
       printf("Answer is %ld\n" , result);
  



    return 0;
}