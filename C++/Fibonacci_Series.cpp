#include<iostream>
using namespace std;

int main(){
    int n,a=0,b=1;
    cout<<"Enter the no. for which you want the Fibonacci Series : ";
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for (int i=1; i <=n; i++)
    {   
        int nextNumber=a+b;
        cout<<nextNumber<<" ";
        a=b;
        b=nextNumber;
    }
    
}