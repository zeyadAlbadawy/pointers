#include <stdio.h>

int mul(int *arr1, int *arr2, int n)
{
    int result = 0;
    for (int j = 0; j < n; j++)
    {
        result += (*(arr1 + j)) * (*(arr2 + j));
    }

    return result;
}

int main()
{
    int n;
    printf("Enter The size");
    scanf("%d", &n);
    int arr1[n], arr2[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter The Following Element");
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter The Following Element");
        scanf("%d", &arr2[i]);
    }

    int result = mul(arr1, arr2, n);
    printf("the result is %d", result);
}