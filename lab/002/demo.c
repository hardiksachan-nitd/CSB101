#include <stdio.h> 
#define  PI    3.1416 
double area_of_circle(float); 
double area_of_circle (float radius) 
{ 
  return  PI*radius*radius; 
} 
int main() 
{ 
  int   squareSide; 
  double  area; 
  printf("Enter the length of square side. \n");
  scanf("%d", &squareSide); 
  area= area_of_circle(squareSide/2); 
  printf("Area of circle enclosing square of side %d is: %f\n", squareSide, area); 
  // return 0;  // Only if you are using windows platform 
}