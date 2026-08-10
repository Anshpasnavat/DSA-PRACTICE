#include <iostream>
#include <utility>
using namespace std;

int moveZeros(int arr[], int n){
    int i = 0 ;
    for(int j = 0; j<n;j++){
        if(arr[j]!=0){
            arr[i] = arr[j];
            i++;
        }
    }return i;

    
}

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr) / sizeof(int);
    moveZeros(arr, n);
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
    }
}
