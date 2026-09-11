#include <iostream>
#include <vector>
using namespace std;

vector<int> endZero(vector<int> &arr)
{
    vector<int> endArr;
    for(auto it : arr)
    {
        if(it > 0)
        {
            endArr.push_back(it);
        }
    }
    for(auto it : arr)
    {
        if(it == 0)
        {
            endArr.push_back(it);
        }
        
    }
    return endArr;
}

//using two pointer
vector<int> endZeroOpt(vector<int> &arr)
{
    int j=0;
    for(int i=0; i<arr.size(); i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[j]);
            j++;
        }
    }
    return arr;
}

int main()
{
    vector<int> arr = {1,0,2,3,0,0,4,1};
    vector<int> ans = endZeroOpt(arr);
    for(auto it : ans)
    {
        cout << it << " ";
    }
    return 0;


}