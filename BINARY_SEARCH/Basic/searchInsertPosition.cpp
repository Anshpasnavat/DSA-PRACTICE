#include<iostream>
#include<climits>
using namespace std;

int searchInsert(int arr[], int n, int target){
    int left = 0;
    int right = n-1;
    while(left<=right){
        int mid = left+(right-left)/2;
        if(arr[mid]>target){
            right = mid - 1; 
        }else{
            left = mid +1;
        }
    }return left;
}

int main(){
    int arr[] = {1,3,5,7,9};
    int n  = sizeof(arr)/sizeof(int);
    int target = 2;
    cout << searchInsert(arr , n , target);
}