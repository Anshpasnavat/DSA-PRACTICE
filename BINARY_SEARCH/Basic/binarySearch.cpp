#include <iostream>
using namespace std;

int binSer(int arr[], int n, int target){
    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid = start + (end - start) / 2;
        if(arr[mid] == target){
            return mid;
        }else if(arr[mid] < target){
            start =  mid + 1;
        }else{
            end = mid - 1;
        }
        
    }
    return -1;

}

int main() {
    int arr[] = {1, 2, 3, 5, 6, 8};
    int target = 5;
    int n = sizeof(arr) / sizeof(int); 
    int result = binSer(arr,n,target);
    cout << result ;

} 