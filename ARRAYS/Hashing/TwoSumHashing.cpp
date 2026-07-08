#include <iostream>
#include <unordered_set>
using namespace std;

bool twoSum(int arr[], int n, int target) {
    unordered_set<int> s;

    for(int i = 0; i < n; i++) {

        int needed = target - arr[i];

        if(s.find(needed) != s.end()) {
            return true;
        }

        s.insert(arr[i]);
    }

    return false;
}
