#include <iostream>
using namespace std;

bool palindrome(int n)
{
    int rev = 0;
    int original = n;
    while(n>0)
    {
        int lastDig = n%10;
        rev = rev*10 + lastDig;
        n/=10;
    }
    if(rev == original)
    {
        return true;
    }
    else{
        return false;
    }

}

int main()
{
    int n1 = 12345;
    int n2 = 12321;
    if(palindrome(n2))
    {
        cout << "palindrome";
    }
    else
    {
        cout << "not palindrome";
    }
    return 0;
}