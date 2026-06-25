#include <iostream>
#include <algorithm>
using namespace std;

void mazorityElement(int arr[], int n) {

    for (int  i= 0; i < n; i++) {
        int count = 0;
        for(int j = 0;j<n;j++){
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if(count > n/2){
            cout << arr[i];
            return;
        }
    }
    cout << "Element not found";
}

int main() {

    int arr[] = {1,2,2,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    mazorityElement(arr, n);
}