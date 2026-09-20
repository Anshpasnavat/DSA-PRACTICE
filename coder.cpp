#include <iostream>
#include<climits>
using namespace std;

int largestElement(int arr[], int n){
    int largest = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }

    }return largest;
}

int main() {
    int arr[] = {10, 25, 7, 42, 18};
    int n = sizeof(arr) / sizeof(int);
    cout << largestElement(arr, n);
    
}