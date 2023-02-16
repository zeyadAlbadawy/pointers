#include <stdio.h>

int compare(int n1, int n2)
{
    if (n1 > n2)
        return 1;
    else
        return -1;
}

void bubbleSort(int A[], int n, int (*compare)(int, int))
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (compare(A[j], A[i]) > 0)
            {
                int swap = A[i];
                A[i] = A[j];
                A[j] = swap;
            }
        }
    }
}

int main()
{
    int n;
    printf("Enter The Size ");
    scanf("%d", &n);
    int A[n];

    for (int j = 0; j < 6; j++)
    {
        printf(" Enter The Following Number");
        scanf("%d", &A[j]);
    }

    bubbleSort(A, n, &compare);
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", A[i]);
    }
}