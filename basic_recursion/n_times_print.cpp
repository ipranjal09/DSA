#include <iostream>
#include <string>
using namespace std;

void printName(string name, int count, int n)
{
    if(count == n)
    {
        return;
    }
    cout << name << " ";
    printName(name, count+1, n);
}
int main()
{
    string name = "Pranjal";
    int count = 0, n = 5;
    printName(name,count, n);
    return 0;
}

