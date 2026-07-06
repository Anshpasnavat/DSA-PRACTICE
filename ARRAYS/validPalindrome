#include <iostream>
#include <algorithm>
using namespace std;

bool validPalindrome(string s)
{
    int left = 0;
    int right = s.length() - 1;

    while(left < right){
        if(s[left]==s[right]){
            left++;
            right--;
        }else{
            return false;
        }
    
    }
    return true;
}
int main()
{
    char s[] = {'a','b','b','a'};
    int n = sizeof(s) / sizeof(s[0]);
    cout << validPalindrome(s);
}