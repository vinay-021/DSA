#include<stdio.h>
int a;

void foo(int b){
    b+=a;
    printf("%d ",b);
}

void bar(int *c){
    int a = *c +2;
    foo(a);
    *c=a-1;
    printf("%d ",a);
}

int main()
{
    a=10;
    bar(&a);
    printf("%d ",a);
    return 0;
}
