#include <stdio.h>


int main()
{   
    int i = 0;
    
    printf("Enter a number(1-7): ");
    scanf("%d", &i);

    switch(i)
    {
        case 1:
        printf("monday\n");
        break;

        case 2:
        printf("teuesday\n");
        break;

        case 3:
        printf("wednessday\n");
        break;

        case 4:
        printf("thusrday\n");
        break;

        case 5:
        printf("friday\n");
        break;

        case 6:
        printf("saturday\n");
        break;

        case 7:
        printf("sunday\n");
        break;

        default:
        printf("Number is invalid.\n");

    }


    return 0;
}