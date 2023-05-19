#include <stdio.h>
int main(void){
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    int max = n1>n2?n1:n2;
    int min = n1<n2?n1:n2;
    int lcm = max;
    while(lcm%min!=0){
        lcm += max;
    }
    printf("%d",lcm);
	return 0;
}