// to input two integer numbers and display the sum of even numbers
// between these two input numbers.

#include <stdio.h>

int main()
{
    int low, high;
    printf("Enter lower and upper limit respectively: ");
    scanf("%d %d", &low, &high);

    if (low % 2 == 1)
        low++;

    int sum = 0;
    for (int i = low; i <= high; i += 2)  
    {
        sum += i;
    }

    printf("Sum = %d\n", sum);
    
}