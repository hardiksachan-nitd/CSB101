/* Write a function, using int pointers (int*), to take an int array
 * and another number as parameter. Function shall search the number (taken as second
 * parameter) in the array (taken as first parameter)and return the index of the first occurrence of
 * this number in the array. If the input number is not present in the array then return -1.
 */

#include <stdio.h>

int linear(int *arr, int q, int n)
{
    int *start = arr;
    int *end = arr + n;

    while (start < end)
    {
        if (*start == q)
        {
            return start - arr;
        }
        start++;
    }

    return -1;
}

int binary(int *arr, int q, int n)
{
    int *start = arr;
    int *end = arr + n;

    while (start < end)
    {
        int *mid = start + (end - start) / 2;
        if (*mid == q)
        {
            return mid - arr;
        }
        else if (*mid > q)
        {
            end = mid;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("\tElement %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    int q;
    printf("Enter the number to be searched: ");
    scanf("%d", &q);

    printf("Linear search: %d\n", linear(arr, q, n));

    // sort the array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Binary search: %d\n", binary(arr, q, n));

    return 0;
}