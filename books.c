#include <stdio.h>
#include <stdbool.h>
bool solve(int arr[],int stud,int n,int mid){
    int count=1;
    int pages=arr[0];
    for(int i=1;i<n;i++){
        if(pages+arr[i]>mid){
            count++;
            pages=arr[i]; 
            if(count>stud){
            return false;
            }   
        }
        else{
            pages+=arr[i];
        }
    }
    return true;
}
int main(){
    int n=4;
    int s=2;
    int book[4]={12, 34, 67, 90};

    int start=0;
    int end=0;
    int mid;
    for(int i=0;i<n;i++){
        end+=book[i];
    }
    int ans=0;
    while(end>=start){
        mid=(start+end)/2;
        if(solve(book,s,n,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    printf("%d",ans);
}