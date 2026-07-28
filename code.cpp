#include<iostream>
#include<utility>
using namespace std;

pair<int,int> floorCeil(int arr[], int n, int target){
    // find ceil: smallest >= target
    int left = 0, right = n-1;
    int ceilVal = -1;
    while(left <= right){
        int mid = left + (right-left)/2;
        if(arr[mid] >= target){
            ceilVal = arr[mid];
            right = mid - 1;
        } else left = mid + 1;
    }
    // find floor: largest <= target
    left = 0; right = n-1;
    int floorVal = -1;
    while(left <= right){
        int mid = left + (right-left)/2;
        if(arr[mid] <= target){
            floorVal = arr[mid];
            left = mid + 1;
        } else right = mid - 1;
    }
    return {floorVal, ceilVal};
}

int main(){
    int arr[] = {2,4,6,8,10};
    int n = sizeof(arr)/sizeof(int);
    int target = 12;
    auto res = floorCeil(arr, n, target);
    cout << "floor=" << res.first << " ceil=" << res.second;
}
