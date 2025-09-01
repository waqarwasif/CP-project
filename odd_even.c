#include <stdio.h>

int main()
{
    int a;

    printf("Enter an integer: ");
    scanf("%d", &a);

    if(a==0){
        printf("Try entering a non zero integer....");
    }
    else if (a%2==0)
    {
        printf("%d is an even integer.",a);
    }
    else if (a%2!=0)
    {
        printf("%d is an odd integer.", a);
    }
    else{
        printf("Something went wrong!!!");
    }
    
    
    return 0;

}