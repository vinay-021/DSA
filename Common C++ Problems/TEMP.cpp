#include<iostream>
using namespace std;

int main(){
    cout<<"Input 5 Numbers to find their Sum & The Average :"<<endl;
    int arr[5],sum=0,average=0;
    for(int i=1;i<=5;i++){
        cin>>arr[i];
    }for(int i=1;i<=5;i++){
        sum=sum+arr[i];
    }
    average=sum/5;
    cout<<"Sum is "<<sum<<" and the Average is "<<average<<"."<<endl;
    return 0;
}