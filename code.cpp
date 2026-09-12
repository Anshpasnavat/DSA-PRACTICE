#include <iostream>
#include <utility>
#include<unordered_map>
using namespace std;

pair<int, int> TwoSum(int arr[], int n, int target) {
    unordered_map<int, int> s;

    for (int i = 0; i < n; i++) {
        s[arr[i]] = i;
    }

    for (int i = 0; i < n; i++) {
        int x = target - arr[i];
        if (s.find(x) != s.end() && s[x] != i) {
            return {i, s[x]};
        }
    }

    return {-1, -1};
}

int main() {
    int arr[] = {2, 7, 11, 15};
    int n = sizeof(arr) / sizeof(int);
    int target = 9;

    pair<int, int> ans = TwoSum(arr, n, target);
    cout << "(" << ans.first << ", " << ans.second << ")" << endl;
    return 0;
}
