#include <stdio.h>

void sum(int num){
    if(num==0){
        return;
    }
    sum(num-1);
    printf("%d\t",num);
}
int main(){
    int n=10;
    sum(n);
}