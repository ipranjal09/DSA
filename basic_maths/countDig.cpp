#include <iostream>
#include <cmath>
using namespace std;

int countDig(int n)
{
    int count = 0;
    while(n>0)
    {
        n/=10;
        count++;
    }

    return count;
}
int countDigOpt(int n)
{
    int count = log10(n) + 1;
    return count;
}

int main()
{
    int n = 12345;
    cout << countDig(n) << endl;
    cout << countDigOpt(n) << endl;
    return 0;

}