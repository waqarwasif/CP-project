#include <stdio.h>
int main()
{
    int len;
    printf("Enter the length of array you want: ");
    scanf("%d", &len);
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        printf("Enter term %d. ", i + 1);
        scanf("%d", &arr[i]);
    }
    int search,flag=0;
    printf("\nEnter a number you want to search ");
    scanf("%d",&search);
    
    for (int i = 0; i < len; i++)
    {
        if(arr[i]==search){
            printf("\n%d is present on %d position",search,i+1);
            flag+=1;

        }
       
    }
    if(flag==0){
        printf("\n%d is not present in this array");
    }
    
}