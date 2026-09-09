#include <iostream>
#include <vector>
using namespace std;

//brute force 
void fibonacci(int n)
{
    int arr[n];
    arr[0] = 0, arr[1] = 1;
    for(int i=2; i<=n; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }
    for(int x : arr)
    {
        cout << x << " ";
    }
}
//using recursion
int fibonacciRcr(int n,int a, int b)
{
    if(n<=1)
    {
        return n;
    }
    cout << a << " " ;
    fibonacciRcr(n-1,b,a+b);
    
}
int main() 
{
    int n = 10;
    fibonacciRcr(n,0,1);
    return 0;
}