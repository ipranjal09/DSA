#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

//using hashing
vector<int> find_dup(vector<int> arr)
{
    //prefetch
    unordered_map<int,int> mp;
    for(int i=0; i<arr.size(); i++)
    {
        mp[arr[i]]++;
    }
    // find duplicates
    vector<int> duplicates;
    for(auto it : mp)
    {
        if(it.second > 1)
        {
            duplicates.push_back(it.first);
        }
    }
    return duplicates;
    
}
// using set
vector<int> rem_dup_set(vector<int> arr)
{
    unordered_set<int> st;
    for(auto it : arr)
    {
        st.insert(it);
    }
    vector<int> ans;
    for(auto it : st)
    {
        ans.push_back(it);
    }
    return ans;

}

//using two pointers method
int rem_dup_opt(vector<int> &arr)
{
    int i = 0;
    for(int j=1; j<arr.size(); j++)
    {
        if(arr[j] != arr[i])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    return i+1;
}

int main()
{
    vector<int> arr = {1,1,2,3,4,4,5};


    // vector<int> duplicates = find_dup(arr);
    // for(int i=0; i<duplicates.size(); i++)
    // {
    //     cout << duplicates[i] << " ";
    // }
    
    // vector<int> ans = rem_dup_set(arr);
    // for(auto it : ans)
    // {
    //     cout << it << " ";
    // }

    int n = rem_dup_opt(arr);
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;

    
}