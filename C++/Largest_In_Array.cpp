#include<iostream>
using namespace std;
int largest(){
    int n;
    cout<<"Enter the size of array:\n";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int largest=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}
int main()
{
    cout<<largest();
    
    return 0;
}
