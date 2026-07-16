#include<iostream>
#include<climits>
using namespace std;

int LargestNumber(int arr[] ,int n){
    int max = INT_MAX;
    for(int i = 0; i<n;i++){
        if(arr[i]<max){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int arr[]= {2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr)/sizeof(int);
    cout << LargestNumber(arr, n); 
    
}