#include <iostream>
using namespace std;
//brute force
bool isPalindrome(string word)
{
    int left = 0, right = word.length()-1;
    while(left < right)
    {
        if(word[left] != word[right])
        {
            return false;
        }
        else 
        {
            left++;
            right--;
        }
    }
    return true;
}
//using recursion
bool isPalindromeOpt(string &word, int left, int right)
{   
    ;
    if(left >= right)
    {
        return true;
    }
    if(word[left] != word[right])
    {
        return false;
    }
    isPalindromeOpt(word, left+1, right-1);
}

int main()
{
    string word = "ABCDCBA";
    bool ans = isPalindromeOpt(word,0,word.length()-1);
    if(ans)
    {
        cout << "Palindrome";
    }
    else 
    {
        cout << "not Palindrome";
    }
    return 0;
}