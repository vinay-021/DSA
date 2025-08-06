#include<iostream>
using namespace std;

int main()
{
    float C,F;
    cout<<"Enter Temperature in °F : ";
    cin>>F;
    C = (F - 32) * 5/9;
    cout<<"Temperature in °C is : "<<C<<endl;
    return 0;
}