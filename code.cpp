#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;

bool containsDuplicate(int arr[], int n){
    unordered_set<int> s;
    for(int i = 0; i < n; i++){
        if(s.find(arr[i]) != s.end()){
            return true;
        }
        s.insert(arr[i]);
    }
    return false;
}

int main() {

    int arr[] = {1,4,0,0,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    containsDuplicate(arr, n);
}