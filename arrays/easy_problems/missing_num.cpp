#include <iostream>
#include <vector>
using namespace std;

//brute force
int missing_Num(vector<int> &arr)
{
    for(int i=0; i<=arr.size(); i++)
    {
        bool found = false;
        for(int j=0; j<arr.size(); j++)
        {
            if(arr[j] == i)
            {
                found = true;
                break;
            }
        }
        if(!found)
        {
          return i;
        }
    }
    
    return -1;
}

int main()
{
    vector<int> arr = {1,4,2,0,5};
    int ans = missing_Num(arr);
    cout << ans;
    return 0;
}
