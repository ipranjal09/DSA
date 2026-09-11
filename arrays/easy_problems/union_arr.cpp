#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

//using map
vector<int> union_Arr(vector<int> arr1, vector<int> arr2)
{
    vector<int> unionArr;
    map<int,int> mp;

    for(int i=0; i<arr1.size(); i++)
    {
        mp[arr1[i]]++;
    }
    for(int i=0; i<arr2.size(); i++)
    {
        mp[arr2[i]]++;
    }
    for(auto it : mp)
    {
        unionArr.push_back(it.first);
    }
    return unionArr;
}

//using set
vector<int> union_Arr2(vector<int> arr1,vector<int> arr2)
{
    set<int> st;
    for(auto it : arr1)
    {
        st.insert(it);
    }
    for(auto it : arr2)
    {
        st.insert(it);
    }
    vector<int> unionArr2;
    for(auto it : st)
    {
        unionArr2.push_back(it);
    }
    return unionArr2;
}

//two pointer method

int main() 
{
    vector<int> arr1 = {1,2,3,4,5};
    vector<int> arr2 = {2,3,4,5,6,4,3};
    vector<int> ans = union_Arr2(arr1, arr2);

    for(auto it : ans)
    {
        cout << it << " ";
    }
    return 0;
}