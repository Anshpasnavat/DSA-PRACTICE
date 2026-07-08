#include <iostream>
#include <algorithm>
using namespace std;

int maxSumSubarray(int arr[], int n, int k)
{
    int currSum= 0;

    for(int i=0; i<k;i++){
        currSum += arr[i];
    }int maxSum = currSum;
    for(int j = k; j<n;j++){
        currSum = currSum - arr[j-k] + arr[j];
        maxSum = max(currSum, maxSum);
    }
    return maxSum;
}
int main() {

    int arr[] = {2,1,5,1,3,2};
    int n = sizeof(arr) / sizeof(int);
    int k = 3;
    cout << maxSumSubarray(arr, n, k);

}