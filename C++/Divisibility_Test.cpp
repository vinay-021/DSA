#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n%3==0 && n%5==0){
        cout<<"true";
        return 0;
    }
    cout<<"false";
    return 0;
}
