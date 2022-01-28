// to calculate sum of series
// 1/2 + 2/3 + ... + n/n+1

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    double sum = 0.0;

    for (double i = 1.0; i <= n; i++)
    {
        double term = i / (i + 1);
        sum += term;
    }

    printf("Series sum: %.5lf\n", sum);
}