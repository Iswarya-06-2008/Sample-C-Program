#include<stdio.h>
#define pi 22/7
int main()
{
    float radius, area;
    printf("Area of the Circle\n");
    printf("\nEnter radius of the circle : ");
    scanf(" %f",&radius);

    area = pi * radius * radius;

    printf("Area : %.2f sq.units\n",area);
}
