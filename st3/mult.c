#include <stdio.h>

int mult(int a,int b){
    if(a==0||b==0){
        return 0;
    }
    return a+mult(a,b-1);
}
int main(){
    int a=10;
    int b=3;
    int sum=mult(a,b);
    printf("%d",sum);
}