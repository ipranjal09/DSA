#include <iostream>
#include <vector>
using namespace std;

//left rotate array by 1 place
vector<int> leftRotate_1(vector<int> &arr)
{
    int first = arr[0];
    for(int i=1; i<arr.size(); i++)
    {
        arr[i-1] = arr[i];
    }
    arr[(arr.size()-1)] = first;

    return arr;
}
//rotate array by k position left
//brute force 
vector<int> leftRotate(vector<int> &arr, int k)
{
    vector<int> reserved;
    for(int i=0; i<k; i++)
    {
        reserved.push_back(arr[i]);
    }
    for(int i=k; i<arr.size(); i++)
    {
        arr[i-k] = arr[i];
    }
    int i,j;
    for( i=arr.size()-1, j=0; i>arr.size()-k-1, j<k; i--, j++)
    {
        arr[i] = reserved[j];
    }
    return arr;
}

//rotate array by k position right
//brute force 
vector<int> rightRotate(vector<int> &arr, int k)
{
    vector<int> reserved;
    for(int i=arr.size()-1; i>arr.size()-k-1; i--)
    {
        reserved.push_back(arr[i]);
    }
    for(int i=arr.size()-k-1; i>=0; i--)
    {
        arr[i+k] = arr[i];
    }
    int i,j;
    for( i=0, j=reserved.size()-1; i<k, j>=0; i++, j--)
    {
        arr[i] = reserved[j];
    }
    return arr;
}

int main()
{
    vector<int> arr = {1,2,3,4,5};

    vector<int> ans = rightRotate(arr, 2);

    for(auto it : ans)
    {
        cout << it << " ";
    }
    return 0;
}