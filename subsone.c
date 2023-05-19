#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int moves=0;
    //Brute Force
    while(n!=1){
        if((n%3!=0)){
            printf("-1");
            return 0;
        }
        if(n%6==0){
            n=n/6;
            moves++;
        }
        else{
            n=n*2;
            moves++;
        }
    }
    printf("%d",moves);
    return 0;
}