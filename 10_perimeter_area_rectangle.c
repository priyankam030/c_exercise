#include <stdio.h>

int h;
int w;
int a;
int p;
int main()
{


    printf("Enter lengh(Inches): ");
    scanf("%d", &h);
    printf("Enter width(Inches): ");
    scanf("%d", &w);

    a = w * h;
    p = 2*(w + h);
    printf("Area of ractagle is %d inch^2 \n", a);
    printf("Perimeter of ractangle is %d inch\n", p );






    return 0;
}