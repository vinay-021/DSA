#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &arr)
{   
    int n=arr.size();
    for (int i = 0; i < n/2; i++)
    {
    int temp = arr[n - i - 1];
    arr[n - i - 1] = arr[i];
    arr[i] = temp;}
}

int main(int argc, char const *argv[])
{

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {   
        cin >> arr[i];
        if(arr[i]==-1) break;
    }

    reverseArray(arr);
    /*for (int i = 0; i < n/2; i++)
    {
        int temp=arr[n-i-1];
        arr[n-i-1]=arr[i];
        arr[i]=temp;
    }*/
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
