#include<stdio.h>
int fun(int, int);
int main(int argc, char const *argv[])
{
    int a=10,b=20,c;
    c=fun(a,b);
    printf("%d",c);
    return 0;
}
int fun(int x, int y){
    int z;
    z=x+y;
    return z;
}
