#include<iostream>
using namespace std;

int main(){
 
 
    /*
    int n;
    cout<<"Enter the value of n "<<endl;
    cin>>n;

    cout<<"Printing count from 1 to n "<<endl;

    for (int i = 0; i <= n; i++)
    {
         cout<<i<<endl;
    }
    */



   /*
    int n=10;
    int a=0;
    int b=1;

    for (int i = 0; i <=n; i++)
    {
        int nextNumber = a+b;
        cout<<nextNumber<<" ";

        a=b;
        b=nextNumber;
    }
    */



   int n;
   cout<<"Enter the value of n"<<endl;
   cin>>n;

   bool isPrime = 1;

   for (int i = 2; i < n; i++)
   {
        //rem = 0 , Not a Prime
        if (n%i == 0)
        {
            //cout<<"Not a Prime Niumber" <<endl;
            isPrime = 0;
            break;
        }
        
   }
   if (isPrime ==0 )
   {
    cout<<"Not a Prime Number"<<endl;
   }else{
    cout<<"is a Prime Number "<<endl;
   }
   
   

}