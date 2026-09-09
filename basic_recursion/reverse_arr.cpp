#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//brute force approach
vector<int> reverseArr(int n, int arr[])
{
    vector<int> rev;
    for(int i=n-1; i>=0; i--)
    {
        rev.push_back(arr[i]);
    }
    return rev;
}
//pointer and swap approach
void reverseArr2(int n, int arr[])
{
    int p1 = 0, p2 = n-1;
    while(p1<p2)
    {
        swap(arr[p1],arr[p2]);
        p1++;
        p2--;
    }
}

int main()
{
    int n = 5;
    int arr[n] = {1,2,3,4,5};
    reverseArr2(n,arr);
    for(int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;


    vector<int> revArr = reverseArr(n,arr);
    for(int y : revArr)
    {
        cout << y << " ";
    }
    cout << endl;


    

    return 0;
}