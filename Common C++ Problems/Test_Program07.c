#include<stdio.h>

int bar(int n){
    int j=1,i;
    if (n==1) return j;
    for(i = 1; i < n; ++i)
        j=j+bar(i);
    return j;    
}

int main()
{
    printf("%d",bar(10));
    return 0;
}
*/