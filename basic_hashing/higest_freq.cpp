#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    //prestoring
    unordered_map<int,int> mp;
    for(int i=0; i<n; i++)
    {
        mp[arr[i]]++;
    }
    int max_freq = 0;
    int max_freq_ele;
    for(auto it : mp)
    {
        if(it.second > max_freq)
        {
            max_freq = it.second;
            max_freq_ele = it.first;
        }
    }
    cout << max_freq_ele << " -> " << max_freq;

    return 0;
}