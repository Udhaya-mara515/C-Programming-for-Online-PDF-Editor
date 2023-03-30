#include <stdio.h>

float calculateDiameter(float radius);
float calculateCircumference(float radius);
float calculateArea(float radius);

int main()
{
    float radius, diameter, circumference,circumference1, area;

    printf("Enter the radius of the circle: ");
   //scanf("%f", &radius);

    diameter = calculateDiameter(5);
    circumference = calculateCircumference(10);
    circumference1 = calculateCircumference(20);
    area = calculateArea(5);

    printf("Diameter: %.2f\n", diameter);
    printf("Circumference: %.2f\n", circumference);
    printf("Circumference: %.2f\n", circumference1);
    printf("Area: %.2f\n", area);

    return 0;
}

float calculateDiameter(float radius)
{
    return (2 * radius);
}

float calculateCircumference(float radius)
{
    return (2 * 3.141592 * radius);
}

float calculateArea(float radius)
{
    return (3.141592 * radius * radius);
}

