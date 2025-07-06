#include<stdio.h>

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,0,1,2,5},*ptr1,**ptr2;
    ptr1=arr;
    ptr2=&ptr1;
    ++*ptr2;
    printf("%d\t",ptr1[1]);
    *ptr2+=3;
    printf("%d\t",ptr1[1]);
    return 0;

}