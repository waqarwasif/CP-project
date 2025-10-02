#include<stdio.h>
#include<math.h>
int main()
{
    float num;
    printf("Enter a number: ");
    scanf("%f",&num);
    // printf("Square root of %d is %.2f\n",num,sqrt(num));
    // printf("Power calculated is %.2f \n",pow(num,3));
    printf("Round up of %f is %f\n",num,ceil(num));
    printf("Round down of %f is %f\n",num,floor(num));
    return 0;
}

