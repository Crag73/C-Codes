#include <stdio.h>

int main(void){
    int num;
    scanf("%d",&num);
    int odd=0;
    int even=0;
    int count=0;
    while(num>0){
        if (count==0){
            odd+=num%10;
            num=num/10;
            count=1;
        }
        else{
            even+=num%10;
            num=num/10;
            count=0;
        }
    }
    printf("%d\n%d",odd,even);
}