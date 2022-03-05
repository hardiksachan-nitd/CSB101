/* Write a program to enter to Cartesian coordinate points and display the Euclidean distance
 * between them using structure pointer function concept.
 */

#include <stdio.h>
#include <math.h>

struct point
{
    int x;
    int y;
};

int main()
{
    struct point p1, p2;

    printf("Enter the x and y coordinates of point 1: ");
    scanf("%d %d", &p1.x, &p1.y);
    printf("Enter the x and y coordinates of point 2: ");
    scanf("%d %d", &p2.x, &p2.y);

    double distance = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));

    printf("The distance between the two points is: %0.2lf\n", distance);
}