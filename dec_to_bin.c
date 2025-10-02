#include<stdio.h>
void dec_to_bin(int dec){

    if(dec==0){
        return;
    }
    dec_to_bin(dec/2);
    printf("%d",dec%2);

}

int main(){
    int dec_num;
    printf("Enter decimal number: ");
    scanf("%d",&dec_num);
    dec_to_bin(dec_num);

}