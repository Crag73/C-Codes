#include <stdio.h>

int main(void){
    int num;
    int print;
    scanf("%d",&num);
    while(num>0){
        print=num%10;
        printf("%d",print);
        num=num/10;
    }
}
