# include<stdio.h>
int main(){

    int a,b;
    printf("Please Enter your first number: ");
    scanf("%d",&a);
    printf("\nPlease Enter your second number: ");
    scanf("%d",&b);

    printf("\nSum is: %d",a+b);
    printf("\nProduct is: %d",a*b);
    printf("\nDifference is: %d",a-b);
    printf("\nQuotient is: %f",(float)a/b);
    printf("\nRemainder is is: %d",a%b);

    return 0;

}
