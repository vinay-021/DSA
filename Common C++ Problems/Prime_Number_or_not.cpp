#include<iostream>
using namespace std;

int main()
{
    int n=2,num;
    cout<<"Enter Number which you want to check whether it is prime or not : "<<endl;
    cin>>num;
    bool isPrime = 1;

    for (n; n < num; n++)       
    {
        if (num%n==0)
        {
            isPrime=0;
            break;
        }
        
    }
    
    if (isPrime==0)
    {
        cout<<num<<" is not a Prime Number"<<endl;
    }
    else
    {
        cout<<num<<" is a Prime Number"<<endl;
    }
    
    
    return 0;
}
