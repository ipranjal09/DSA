#include <iostream>
using namespace std;

int HCF(int n1, int n2)
{
    int hcf = 1;
    for(int i=1; i<=min(n1,n2); i++)
    {
        if(n1%i == 0 && n2%i == 0)
        {
            hcf = i;
        }

    }
    return hcf;
}
int main()
{
    int n1 = 12;
    int n2 = 9;
    cout << HCF(n1,n2);
    return 0;
}