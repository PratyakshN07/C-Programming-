#include <stdio.h>
int main()
{
    int r;
    printf("Enter radius of circle=:");
    scanf("%d", &r);
    float a = 3.14 * r * r;
    printf("Radius of a circle = %d \n", r);
    printf("Area of circle = %f", a);
    return 0;
}