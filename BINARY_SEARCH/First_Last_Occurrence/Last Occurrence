#include<iostream>
#include<climits>
using namespace std;

int lastOccurence(int arr[], int n, int target){
    int left = 0;
    int right = n-1;
    while(left<=right){
        int mid = left+(right-left)/2;
        if(arr[mid]<=target){
            left = mid +1; 
        }else{
            right = mid - 1;
        }
    }if(right>=0&& arr[right] == target ){
        return right;
    }else{
        return -1;
    }
}

int main(){
    int arr[] = {1,3,3,3,4,4,5,5,5,5,7,9};
    int n  = sizeof(arr)/sizeof(int);
    int target = 3;
    cout << lastOccurence(arr , n , target);
}