#include <stdio.h>

int main()
{
    int x, y, z;
    int *px, *py, *pz;
    x = 5;
    y = 7;
    z = 9;

    px = &x;
    py = &y;
    pz = &z;

    printf("x = %d \n, y = %d \n, z = %d \n, px = %d\n, py = %d \n, pz = %d \n, *px = %d \n, *py = %d \n, *pz = %d\n", x, y, z, px, py, pz, *px, *py, *pz);

    printf("Swapping Pointers");
    pz = px;
    px = py;
    py = pz;

    printf("x = %d \n, y = %d \n, z = %d \n, px = %d \n, py = %d \n, pz = %d \n, *px = %d \n, *py = %d \n, *pz = %d \n", x, y, z, px, py, pz, *px, *py, *pz);
}