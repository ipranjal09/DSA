#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> getDivisor(int n)
{
    vector<int> divisors;
    for(int i=1; i<=n; i++)
    {
        if(n%i == 0)
        {
            divisors.push_back(i);
        }
    }
    return divisors;
}

vector<int> getDivisorOpt(int n)
{
    vector<int> divisors;
    for(int i=1; i*i<=n; i++)
    {
        if(n%i == 0)
        {
            divisors.push_back(i);
            if(i != n/i)
            {
                divisors.push_back(n/i);
            }
        }
    }
    sort(divisors.begin(),divisors.end());
    return divisors;
}
int main() 
{
    int n = 30;
    vector<int> divs = getDivisorOpt(n);
    for(auto x : divs)
    {
        cout << x << " ";
    }

    
    return 0;
}