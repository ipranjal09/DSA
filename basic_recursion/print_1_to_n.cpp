#include <iostream>
#include <algorithm>
using namespace std;

void printNum(int count, int n)
{
    if(count > n)
    {
        return;
    }
    cout << count << " ";
    printNum(count + 1, n);
}
int main()
{
    int n = 4;
    printNum(1,n);
    return 0;
}