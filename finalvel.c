#include <stdio.h>
int main()
{

    float vi,a,t;
    printf("Please Enter the initial velocity: ");
    scanf("%f", &vi);
    printf("\nPlease Enter the acceleration: ");
    scanf("%f", &a);
    printf("\nPlease Enter the time: ");
    scanf("%f", &t);
    float vf = vi + (a*t);
    float s = (vi*t)+(1.0/2*(a*(t*t)));

    printf("\nFinal veleocity: %.2f m/s",vf);
    printf("\nDistance covered: %.2f m",s);

    return 0;
}