#include <iostream>
#include <cmath>
using namespace std;

bool armstrong(int n)
{
    int original = n;
    int count = 0;
    int sum = 0;
    int temp = n;
    while(temp>0)
    {
        temp/=10;
        count++;
    }
    temp = n;
    while(temp>0)
    {
        int lastDig = temp%10;
        sum += pow(lastDig, count);
        temp/=10;
    }
    if(sum == original)
    {
        return true;
    }
    else 
    {
        return false;
    }


}
int main()
{
    int n1 = 153;
    int n2 = 123;
    if(armstrong(n1))
    {
        cout << "armstrong";

    }
    else 
    {
        cout << "not armstrong";
    }
    return 0;
}