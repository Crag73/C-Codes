#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    float sum=0.0;
    if (n<0){
        printf("Invalid input");
        return 0;
    }
    for(float i=1.0;i<=n;i++){
        sum+=1/i;
    }
    printf("%.2f",sum);
    return 0;
}