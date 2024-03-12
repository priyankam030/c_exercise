#include <stdio.h>
float find_area_of_circul (float r);
int main()
{   
    float rd;
    printf("Enter a number(cm): ");
    scanf("%f", &rd);
    float area = find_area_of_circul(rd);

    printf("Area of circul = %f cm^2\n", area);
}

float find_area_of_circul (float r)
{

    float result =  ((3.14) * r * r);
    return result;

}

