#include <stdio.h>

int main(void){
    int num=0;
    int inp;
    while(num>=0){
        scanf("%d",&inp);
        num+=inp;
        if(num>=0){
            printf("%d",inp);
        }
    }

}