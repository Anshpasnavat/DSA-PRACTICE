#include <iostream>
using namespace std;

int largest(int arr[], int n){
    int max = arr[0];
    for(int i = 0; i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[] = {1, 2, 4, 6, 3};
    int n = sizeof(arr) / sizeof(int); 
    int result = largest(arr,n);
    cout << result ;

}