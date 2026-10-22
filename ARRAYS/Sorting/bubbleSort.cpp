#include<iostream>
using namespace std;

int bubbleSort(int arr[], int n){
    for(int i = 0; i<n-1;i++){
        for(int j = 0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i = 0;i<n;i++){
        cout << arr[i] <<" ";
    }
    return 0;
}


int main(){
    int arr[]= {5,2,1,8,3};
    int n = sizeof(arr)/sizeof(int);
    bubbleSort(arr, n);
}