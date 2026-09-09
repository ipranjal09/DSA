#include <iostream>
#include <algorithm>
using namespace std;

void largest(int n, int arr[])
{
    int large = arr[0];
    for(int i=1; i<n; i++)
    {
        if(arr[i] > large)
        {
            large = arr[i];
        }
    }
    cout << large << endl;
}

void second_largest(int n, int arr[])
{
    sort(arr, arr+n);
    int second_large = arr[n-2] ;

    cout << second_large;
}

void second_largest_opt1(int n, int arr[])
{
    
}
int main()
{
    int n = 5;
    int arr[n] = {1,2,3,4,5};
    largest(n, arr);
    second_largest(n, arr);
    
    return 0;
}