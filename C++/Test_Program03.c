#include<stdio.h>

void quiz(int i){
    if (i>1)
    {
        quiz(i/2);
        quiz(i/2);
    }
    printf("*\n");
}
int main(){
    quiz(5);
    return 0;
}