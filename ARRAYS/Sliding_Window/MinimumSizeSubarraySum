#include <iostream>
#include <algorithm>
#include<climits>
using namespace std;

int maxSumSubarray(int arr[], int n, int target)
{
    int currSum= 0;
    int left = 0;
    int ans = INT_MAX;

    for(int right=0; right<n;right++){
        currSum += arr[right];
        while(currSum >= target){
            int length = right - left +1;
            ans = min(ans, length) ;
            currSum -= arr[left];
            left ++;
        }
    }if(ans == INT_MAX){
    return 0;
}else{
    return ans;
}
}


int main() {

    int arr[] = {2,1,5,1,3,2};
    int n = sizeof(arr) / sizeof(int);
    int target = 9;
    cout << maxSumSubarray(arr, n, target);

}