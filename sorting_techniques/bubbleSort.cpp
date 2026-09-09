#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void bubbleSortOpt(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        bool swapped = false;
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped)
        {
            break;
        }
    }
}

int main() 
{
    int n = 5;
    int A[n] = {5,2,3,4,1};
    bubbleSortOpt(A,n);
    for(int x : A)
    {
        cout << x << " ";
    }
    return 0;
}