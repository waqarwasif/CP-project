#include <stdio.h>
int main()
{
    
    float current,highest;
    printf("*****HIGHEST RAINFALL*****\n\n");
    printf("Enter Highest ranifall ever in your country: ");
    scanf("%f",&highest);
    printf("\nEnter Current ranifall in your country: ");
    scanf("%f", &current);
    if(current>highest)
    {
        highest=current;
    }

    printf("\n\nThe highest rainfall record till now is: %.2f mm ",highest);
    return 0;
}