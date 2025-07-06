#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main()
{
    int num = 123445;
    /*int count=0;
    while (num)
    {
        count++;
        num=num/10;
    }*/
    int x = (int)(log10(num) + 1);
    // cout<<count<<endl;
    cout << x << endl;
    return 0;
}
