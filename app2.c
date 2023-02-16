#include <stdio.h>

int summation(int *n1, int *n2)
{
    int sum = (*n1) + (*n2);
    return sum;
}

int main()
{
    int n1, n2;
    printf("Enter The First number\n");
    scanf("%d", &n1);
    printf("Enter The Second Number\n");
    scanf("%d", &n2);
    int sum = summation(&n1, &n2);
    printf("The Sum of %d and %d is %d ", n1, n2, sum);
}