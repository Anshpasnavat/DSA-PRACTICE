#include<iostream>
#include<utility>
#include<climits>
using namespace std;

int findMin(int  nums[], int n) {
        int left = 0;
        int right = n-1;
        int minVal = INT_MAX;
        while(left<=right){
            int mid = left+(right-left)/2;
            if(nums[left]<nums[mid]){
                if(nums[mid]>nums[right]){
                    left = mid + 1;
                    minVal = min(minVal, nums[mid+1]);
                }
            }else{
                if(val)
            }
        }return minVal;
    }

int main(){
    int nums[] = {3,4,5,1,2};
    int n = sizeof(nums)/sizeof(int);
    cout << findMin(nums, n);
}
