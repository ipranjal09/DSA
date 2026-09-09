#include <iostream>
using namespace std;
// O(n)
int n_num_sum(int n)
{
    if(n == 1)
    {
        return 1;
    }
    return n + n_num_sum(n-1);
}
// O(1)
int n_num_sum_opt(int n)
{
    int sum = (n*(n+1))/2;
    return sum;
}
int main()
{
    int n = 10;
    cout << n_num_sum_opt(n);
    return 0;
}