#include <stdio.h>


int main()
{ 
    int a;
    printf("Enter the nubmer: ");
    scanf("%d", &a);
    
    int remainder;

    remainder = a%2;

   // printf("a is %d, renainder is %d\n", a, remainder);


    if( remainder == 0) 
    {

        printf("value is even\n");
    }
    else
    {
        printf("value is odd\n");
        
    }

    return 0;
}