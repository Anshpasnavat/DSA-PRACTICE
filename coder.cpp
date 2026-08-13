#include <iostream>
using namespace std;

int missingNumber(int arr[], int n){
    for(int i=0;i<n;i++){
        if(arr[i+1]-arr[i]!=1){
            return i+2;
        }

    } return -1;
}

int main() {
    int arr[] = {1, 2, 4, 5, 6};
    int n = sizeof(arr) / sizeof(int);
    cout << missingNumber(arr, n);
    
}