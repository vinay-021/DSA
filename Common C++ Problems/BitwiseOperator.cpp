#include<iostream>

using namespace std;

int main(){

    int a=4,b=6;

    cout<<"a&b is "<<(a&b)<<endl;
    cout<<"a|b is "<<(a|b)<<endl;
    cout<<"~a is "<<(~a)<<endl;
    cout<<"a^b is "<<(a^b)<<endl;

    cout<<"\n\n"<<endl;

    cout<<(17<<1)<<endl;
    cout<<(17<<2)<<endl;
    cout<<(19<<1)<<endl;
    cout<<(21<<2)<<endl;
    
    cout<<"\n\n"<<endl;

    int i=7;
    cout<<(i++)<<endl;
    cout<<(++i)<<endl;
    cout<<(i--)<<endl;
    cout<<(--i)<<endl;


    return 0;
}