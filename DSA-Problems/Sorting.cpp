/*In this file we have covered some Sorting Algorithms. These Sorting Algorithms are Selection Sort, Bubble Sort, Insertion Sort.*/
#include <iostream>
using namespace std;

void SWAP(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void SelectionSort(int arr[], int n)
{

    for (int i = 0; i <= n - 2; i++)
    {
        int min = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        SWAP(arr[min], arr[i]);
    }
}
void BubbleSort(int arr[], int n)
{

    for (int i = n - 1; i >= 1; i--)
    {
        int didSwap = 0;
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                SWAP(arr[j], arr[j + 1]);
                didSwap = 1;
            }
        }
        if (didSwap == 0)
        {
            break;
        }
        cout << "runs\n";
    }
}
void InsertionSort(int arr[], int n)
{

    for (int i = 0; i <= n - 1; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            SWAP(arr[j - 1], arr[j]);
            j--;
            cout<<"Runs\n";
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // SelectionSort(arr, n);
    // BubbleSort(arr , n);
    InsertionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}