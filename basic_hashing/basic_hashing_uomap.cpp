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
    //pre storing
    unordered_map<int,int> mp;
    for(int i=0; i<n; i++)
    {
        mp[arr[i]]++;
    }
    //fetching
    int q;
    cin >> q;
    while(q--)
    {
        int num;
        cin >> num;
        cout << mp[num] << " ";
    }
    return 0;
}