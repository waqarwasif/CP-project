#include <stdio.h>

int main()
{
    // This program calculate product of three numbers
    int x, y, z;
    printf("Enter three integers: ");
    scanf("%d %d %d", &x, &y, &z);
    int result = x * y * z;
    printf("The product is: %d", result);
    return 0;
}