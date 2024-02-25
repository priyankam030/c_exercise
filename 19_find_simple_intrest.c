#include <stdio.h>


int main()
{   
    int year = 0;
    int amount = 0;
    int intrest_rate = 0;
    int simple_intrest = 0;

    printf("Enter Year: ");
    scanf("%d", &year);
 
    printf("Enter the Amount: ");
    scanf("%d", &amount);

    printf("Enter Intrest Rate: ");
    scanf("%d", &intrest_rate);

    simple_intrest = (amount * year * intrest_rate)/(100);

    printf("Simple intrest = %d\n", simple_intrest);




    return 0;
}