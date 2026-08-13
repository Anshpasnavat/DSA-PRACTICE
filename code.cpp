#include <iostream>
#include <utility>
using namespace std;

int removeDuplicates(int arr[], int n){
    int i = 0 ;
    for(int j = 1; j<n;j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }return i+1;

    
}

int main() {
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    int newlength = removeDuplicates(arr, n);
    for(int i = 0;i < newlength;i++){
        cout << arr[i] << " ";
    }
}
