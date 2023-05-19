#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int num=1;
    for(int i=0;i<n;i++){
        if(i%2==0){
                for(int j=0;j<i+1;j++){
                    printf("%d\t",num);
                    num++;
                }
        }
        else{   
                int temp=num+i+1;
                for(int j=i+1;j>0;j--){
                    printf("%d\t",temp-1);
                    temp--;
                    num++;
                }
        }
        printf("\n");
    }
    return 0;
}