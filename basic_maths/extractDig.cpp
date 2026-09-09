#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> extractDig(int n)
{
    vector<int> ans ;
    while(n>0)
    {
        int lastDig = n%10;
        ans.push_back(lastDig);
        n/=10;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main()
{
    int n = 12345;
    vector<int> digits = extractDig(n);
    for(auto x : digits)
    {
        cout << x << " ";
    }
    return 0;

}