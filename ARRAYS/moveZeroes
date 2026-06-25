#include <iostream>
#include <algorithm>
using namespace std;

void moveZeroes(int arr[], int n) {
    int i = 0;

    for (int j = 0; j < n; j++) {
        if (arr[j] != 0) {
            swap(arr[i], arr[j]);
            i++;
        }
    }
}

int main() {

    int arr[] = {1,0,2,5,0};
    int n = sizeof(arr) / sizeof(arr[0]);
    moveZeroes(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if(i+1<n){
            cout << " ";
        }
    }

    return 0;
}