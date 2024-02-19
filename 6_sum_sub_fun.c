#include <stdio.h>

// int sum_number(int a, int b);
// int sub_number(int a, int b);

int sum_number(int a, int b)
{ 
    int result = a + b;

    return result;
}


int sub_number(int a, int b)
{
    int result = a - b;
    return result;

}



int main()
{
    int sum_result = 0;
    int sub_result = 0; 

    sum_result = sum_number(20,80);
    sub_result = sub_number(20,10);

    printf("sum = %d, sub = %d\n",sum_result, sub_result);

    return 0;
}

int sum_number(int a, int b)
{ 
    int result = a + b;

    return result;
}


int sub_number(int a, int b)
{
    int result = a - b;
    return result;

}