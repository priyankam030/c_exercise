#include <stdio.h>

int main()
{
    float a = 0; // fahrenheit
    printf("Enter Temprature in Fahrenheit: ");
    scanf("%f",&a);
    float b = ((a - 32)*5/9);
    printf("Temperature is %.2f Degree Celsius\n", b);

    return 0;
}