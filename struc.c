#include <stdio.h>

struct test{
    float x;
};

int main(){
    struct test b,c;
    struct test a={20};
    b.x=10;
    c.x=a.x+b.x;
    printf("%f %f %f",a.x,b.x,c.x);
}       