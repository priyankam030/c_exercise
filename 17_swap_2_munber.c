#include <stdio.h>

int main()
{   
    int a = 10;
    int b = 20;
    int c = 0;
    printf("value of a = %d, value of b = %d \n",a,b);
    
    c = b;
    b = a;
    a = c;

    printf("value of a = %d, value of b = %d \n",a,b);
    

    return 0;
}