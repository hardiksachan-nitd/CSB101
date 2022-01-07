// to show the difference between float and double

#include <stdio.h>
#include <math.h>

void calculate_roots_as_floats()
{
    printf("When using float data type:\n\n\n");

    float a, b, c;

    printf("Please enter a, b, c as per the equation ax^2 + bx + c = 0: ");
    scanf("%f %f %f", &a, &b, &c);

    float sqrtd = sqrtf(b * b - 4 * a * c);

    float r1 = (-b + sqrtd) / (2 * a);
    float r2 = (-b - sqrtd) / (2 * a);

    printf("The roots are: %f, %f", r1, r2);
}

void calculate_roots_as_doubles()
{
    printf("When using double data type:\n\n\n");

    double a, b, c;

    printf("Please enter a, b, c as per the equation ax^2 + bx + c = 0: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    double sqrtd = sqrt(b * b - 4 * a * c);

    double r1 = (-b + sqrtd) / (2 * a);
    double r2 = (-b - sqrtd) / (2 * a);

    printf("The roots are: %lf, %lf", r1, r2);
}

int main()
{
    calculate_roots_as_floats();
    printf("\n\n\n\n\n");
    calculate_roots_as_doubles();
}