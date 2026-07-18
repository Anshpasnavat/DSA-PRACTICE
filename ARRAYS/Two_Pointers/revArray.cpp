#include<iostream>
#include<climits>
using namespace std;

void revArray(int arr[] ,int n){
    int left = 0;
    int right = n-1;
    while(left<right){
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}

int main(){
    int arr[]= {2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr)/sizeof(int);
    revArray(arr, n);
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
    
}