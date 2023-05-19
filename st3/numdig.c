#include <stdio.h>
int dig(int n){
    if(n==0){
        return 0;
    }
    return 1+dig(n/10);
}
int main(){
    int a=15;
    int no=dig(a);
    printf("%d",no);
}