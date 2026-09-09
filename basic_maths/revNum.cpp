#include <iostream>
using namespace std;

int revNum(int n)
{
    int rev = 0;
    while(n>0)
    {
        int lastDig = n%10;
        rev = rev * 10 + lastDig;
        n/=10;
    }
    return rev;
}

int main()
{
    int n = 12345;
    cout << revNum(n);
    return 0;
}