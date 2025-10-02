#include<stdio.h>
int sumOfcomplex(int c1r,int c1i,int c2r,int c2i){
    
    int rl= c1r +c2r;
    int img=c1i + c2i;
    printf("\nThe sum of both the complex numbers is %d + %di",rl,img);
    
}


int main(){
    int c1r,c1i,c2r,c2i;
    printf("Enter first complex number:");
    scanf("%d%d",&c1r,&c1i);
    printf("%d + %di",c1r,c1i);
    printf("\nEnter first complex number:");
    scanf("%d%d",&c2r,&c2i);
    printf("%d + %di",c2r,c2i);
    sumOfcomplex(c1r,c1i,c2r,c2i);
    
} 