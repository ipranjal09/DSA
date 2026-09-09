#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        int key = arr[i];
        int j = i-1;
        while( j>=0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main() 
{
    int n = 5;
    int A[n] = {5,2,3,4,1};
    insertionSort(A,n);
    for(int x : A)
    {
        cout << x << " ";
    }
    return 0;
}