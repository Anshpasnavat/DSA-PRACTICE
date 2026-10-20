#include <iostream>
#include<climits>
using namespace std;

int main() {
    string s = "madam";
    int left = 0;
    int right = s.length()-1;
    while(left < right){
        if(s[left] != s[right]){
            cout << "Not a palidrome";
        }
        left++;
        right--;
    }

}