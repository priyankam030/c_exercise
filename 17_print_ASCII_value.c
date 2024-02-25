#include <stdio.h>

int main()
{   
    char ch = 0;

    printf(" Enter a charecter:  ");

    scanf("%c", &ch);

    if(((ch >= 'a') && (ch <= 'z'))   ||  ( (ch>= 'A') &&  (ch <= 'Z' )))
    {
        printf("ASCII  of %c  is %d\n", ch, ch);
    }
    else
    {
        printf("Number is invalid\n");
    }

  


    return 0;    
}