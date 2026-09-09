#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Precompute
    int hash[n + 1] = {0};

    for(int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    // Fetching
    int q;
    cin >> q;

    while(q--)
    {
        int num;
        cin >> num;

        cout << hash[num] << " ";
    }

    return 0;
}