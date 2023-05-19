#include <stdio.h>

int main(void){
    int num;
    int digit;
    scanf("%d",&num);
    scanf("%d",&digit);
    int count=0;
    while(num>0){
        if (num%10==digit){
            count+=1;
            num=num/10;
        }
        else{
            num=num/10;
        }
    }
    printf("%d",count);
}x