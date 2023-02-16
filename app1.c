#include <stdio.h>

int main()
{
    int num = 10;
    printf("%d \n", num);
    int *ptr = &num;
    *ptr = 20;
    printf("%d ", num);
}