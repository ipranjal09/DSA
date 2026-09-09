#include <iostream>
using namespace std;

void insertion(int &n, int arr[], int pos, int val)
{
    //right shift from last
    for(int i=n; i>pos; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos] = val;
    n++;
}
void deletion(int &n, int arr[], int pos)
{
    //left shit from pos
    for(int i=pos; i<n-1; i++)
    {
        arr[i] = arr[i+1];
    }
    n--;
}

int main()
{
    int arr[100] = {1,2,3,4,5};
    int n = 5;
    // insertion(n, arr, 2, 99);
    deletion(n,arr,2);
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}