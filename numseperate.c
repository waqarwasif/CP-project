#include <stdio.h>

int main()
{
    int a,f,s,t,fr,fv;

    printf("Enter a five digit number: ");
    scanf("%d", &a);
    if(a<10000||a>99999){
        printf("Try entering a 5 digit number");
        return 1;
    }
     f=a/10000;
     s=(a/1000)%10;
     t=(a/100)%10;
     fr=(a/10)%10;
     fv=(a%10); 
    printf("%d   %d   %d   %d   %d",f,s,t,fr,fv);
    return 0; 


}