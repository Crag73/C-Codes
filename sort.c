#include <stdio.h>
#include <stdlib.h>
int compare(const void * a, const void * b)
{
    return (*(int*)a - *(int*)b);
}
int main(void){
    int values[] = { 88, 56, 100, 2, 25 };
    qsort(values,5,sizeof(int),compare);
    for(int n=0;n<5;n++) {   
      printf("%d ", values[n]);
   }
}