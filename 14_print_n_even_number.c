//print n even number 
#include <stdio.h>

int n = 0;
int main()
{
    int i = 0;

   printf("Please enter n number:  ");
   
    scanf("%d", &n);

    for( i = 1; i<=n; i++)
    {   
        
        printf("%d\n", (i*2));


    }
 

    return 0;
}




