#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two integers: ");
    scanf("%d %d",&a,&b);
    if((a==0)||(b==0)){
        printf("Try entering non zero integers!");}
    else if(a%b==0){
        printf("\n%d is multiple of %d",a,b);}
    else if(b%a==0){
        printf("\n%d is multiple of %d",b,a);}
    else {
        printf("\nNone of the integer is multiple of any");
    }    
       
        
    
    return 0;
}