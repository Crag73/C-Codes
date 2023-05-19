#include <stdio.h>

int min2(int num1,int num2){
    if(num1>num2){
        return num2;
    }
    else{
        return num1;
    }
}
int main(){
    int n=11;
    int arr[]={1,0,2,1,0,1,3,2,1,2,1};
    int left[11];
    int right[11];
    int i;
    int min=arr[0];
    int max=arr[n-1];
    for(i=0;i<n;i++){
        if (arr[i]>min){
            min=arr[i];
        }
        left[i]=min;
    }
    for(i=n-1;i>=0;i--){
        if (arr[i]>max){
            max=arr[i];
        }
        right[i]=max;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans+=min2(left[i],right[i])-arr[i];
    }
    printf("%d",ans);

}