#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    //pre storing
    int hash[256] = {0};
    for(int i=0; i<s.size(); i++)
    {
        hash[s[i]]++;
    }
    
    //fetching 
    int q;
    cin >> q;
    while(q--)
    {
        char c;
        cin >> c;
        cout << hash[c] << " ";
    }

    return 0;

}