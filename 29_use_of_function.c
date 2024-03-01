#include <stdio.h>

void check_even_odd( int num );
int check_prime_non_prime( int prime);

int main()
{ 
    int a;
    printf("Enter the nubmer: ");
    scanf("%d", &a);   
    check_even_odd( a );

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    int result = check_prime_non_prime( num);    // return 0 if number is non prime and wise versa

    if(result == 0)
    {
        printf("Number is Non prime\n");
    }
    else
    {
        printf("Number is prime\n");
    }

    return 0;
}

int check_prime_non_prime ( int prime)
{
    int i;
    for ( i = 2; i <= (prime/2); i++)
    {
        int remender = prime % i;
        //printf("i %d,  num  %d   remainder  %d\n", i, num, remender);
        if (remender == 0)
        {
            //printf("number is non prime\n");
            return 0;
        } 
    }
    if (i>(prime/2))
    {
        //printf("number is prime\n");
        return 1;

    }

}






void check_even_odd( int num )
{   
    int remainder;

    remainder = num%2;
  
    if( remainder == 0) 
    {

        printf("value is even\n");
    }
    else
    {
        printf("value is odd\n");
        
    }   

}