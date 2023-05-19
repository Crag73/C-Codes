#include <stdio.h>
int n;
int asum(int arr[],int n){
    if(n==-1){
        return 0;
    }

    return arr[n]+asum(arr,n-1);
}

int main(){
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",asum(arr,n));
}   