#include<stdio.h>
int main(){
    int arr[5];
    for (int i=0;i<5;i++){
        printf("Enter term %d. ",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i=4;i>=0;i--){
        printf("%d. %d\n",i+1,arr[i]);
        
    }
    
}