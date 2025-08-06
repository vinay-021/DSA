#include<stdio.h>

int main()
{
    int i=3;
    switch (i<<5)
    {
    default:i++;
    case 1 : i=i+10;
        break;
    case 2 : i=i-30;
    case 3 : i+-10;
        break;
    }

    printf("%d",i);
    
    return 0;
}
