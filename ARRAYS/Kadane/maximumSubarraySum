#include <iostream>
#include <unordered_set>
#include <climits>
using namespace std;

int maxSum(int arr[], int n) {
    int maxSum= INT_MIN;
    int currSum = 0;

    for(int i = 0; i < n; i++) {

        currSum += arr[i];
        maxSum = max(maxSum, currSum);

        if(currSum<0) {
            currSum = 0;
        }

    }

    return maxSum;
}

int main() {

    int arr[] = {1, -2, 3, 4, -1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << maxSum(arr, n);

    return 0;
}