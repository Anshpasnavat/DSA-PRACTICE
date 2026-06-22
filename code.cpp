#include <iostream>
#include <unordered_set>
#include <climits>
using namespace std;

int maxSum(int arr[], int n) {

    for(int i = 0; i < n; i++) {
            cout << arr[i]  << endl;
    }
        

    return 1;
}

int main() {

    int arr[] = {1, -2, 3, 4, -1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << maxSum(arr, n);

    return 0;
}