#include <stdio.h>


int main()
{   
    int i = 0;

    scanf("%d", &i);

    if(i == 1)
    {
        printf("monday\n");
    }
    else if(i == 2)
    {
        printf("teuesday\n");
    }
    else if(i == 3)
    {
        printf("wednessday\n");
    }
    else if(i == 4)
    {
        printf("thusrday\n");
    }
    else if(i == 5)
    {
        printf("friday\n");
    }

    else if(i == 6)
    {
        printf("saturday\n");
    }

   else  if(i == 7)
    {
        printf("sunday\n");
    }
    else
    {
        printf("Number is invalid.\n");
    }

    return 0;
}