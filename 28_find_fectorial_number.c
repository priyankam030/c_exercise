#include <stdio.h>


int main()
{   
    int i = 0;
    int result = 1;
    int facto  = 0;

        printf("Enter a number: ");
        
        scanf("%d",&facto);


    for( i = 1; i <= facto; i++)
    {
        result = result * i;
     
    }
       printf("Answer is %d\n" , result);
  
    return 0;
}