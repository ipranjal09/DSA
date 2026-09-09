#include <iostream>
using namespace std;

bool check_sort(int n, int arr[])
{
    for(int i=0; i<n; i++)
    {
        if(arr[i] > arr[i+1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n = 5;
    int arr[n] = {1,2,3,4,5};
    bool ans = check_sort(n, arr);
    if(ans)
    {
        cout << "true";
    }
    else{
        cout << "false";
    }

    return 0;

}