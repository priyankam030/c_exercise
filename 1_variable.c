#include <stdio.h>

void main()
{
    printf("size of char %ld byte\n", sizeof(char));
    printf("size of int %ld byte\n", sizeof(int));
    printf("size of float %ld byte\n", sizeof(float));
    printf("size of short %ld byte\n", sizeof(short));
    printf("size of long int %ld byte\n", sizeof(long int));
    printf("size of double %ld byte\n", sizeof(double));   
    printf("size of sizeof() %ld byte\n", sizeof(sizeof(int)));

}