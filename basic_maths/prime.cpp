#include <iostream>
using namespace std;

void isPrime(int n)
{
    bool prime = true;
    if(n<=1)
    {
        cout << "not prime" << endl;
    }
    for(int i=2; i<n; i++)
    {
        if(n%i == 0)
        {
            prime = false;
        }
    }
    if(prime)
    {
        cout << "prime";
    }
    else
    {
        cout << "not prime";
    }
    
}
/*We can optimize the algorithm by only iterating
 up to the square root of n when checking for factors.
  This is because if n has a factor greater than its
   square root, it must also have a factor smaller 
   than its square root.*/
   
void isPrimeOpt(int n)
{
    bool prime = true;
    if(n<=1)
    {
        cout << "not prime" << endl;
    }
    for(int i=2; i*i<=n; i++)
    {
        if(n%i == 0)
        {
            prime = false;
        }
    }
    if(prime)
    {
        cout << "prime";
    }
    else
    {
        cout << "not prime";
    }
    
}

int main()
{
    int n = 16;
    isPrimeOpt(n);
    return 0;
}
