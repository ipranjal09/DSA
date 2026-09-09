#include <iostream>
#include <algorithm>
#include <climits>
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
    int large = arr[0];
    int second_large = INT_MIN;
    for(int i=1; i<n; i++)
    {
        if(arr[i] > large)
        {
            second_large = large;
            large = arr[i];
        }
        else if(arr[i] > second_large && arr[i]!=large)
        {
            second_large = arr[i];
        }
    }
    cout << large << endl << second_large;
}
int main()
{
    int n = 5;
    int arr[n] = {10,2,3,4,5};
    // largest(n, arr);
    // second_largest(n, arr);
    second_largest_opt1(n, arr);
    
    return 0;
}