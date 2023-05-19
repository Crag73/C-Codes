#include <stdio.h>

int main(){
    int n=10;
    int arr[]={4,4,2,4,3,4,4,3,2,4};

    int freq[100]={0};

    for(int i=0;i<n;i++){
        freq[arr[i]]+=1;
    }
    for(int i=0;i<100;i++){
        if(freq[i]>(n/2)){
            printf("%d",i);
            break;
        }
    }       
}