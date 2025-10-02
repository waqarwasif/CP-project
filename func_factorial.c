#include<stdio.h>
int factorial(int k)
{
    if(k==0||k==1){
        return 1;
    }
    else if (k>1){
    return k*factorial(k-1);}
    else{
        printf("Error: Factorial of negative number doesn't exist.\n");
        return -1;
    }
}
int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d",&num);
    printf("Factorial of %d is %d\n",num,factorial(num));
    return 0;
}