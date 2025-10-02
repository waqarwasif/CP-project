#include <stdio.h>
int main()
{
    int len;
    float average;
    printf("Enter the length of array you want: ");
    scanf("%d", &len);
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        printf("Enter term %d. ", i + 1);
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += arr[i];
    }
    average=(float)sum/len;
    printf("\nAverage is %.3f", average);
}